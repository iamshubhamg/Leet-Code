public class ConvertBSTToGreaterTree {

  public static class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int x) {
      val = x;
    }
  }

  
  public static void main(String[] args) {
    TreeNode node = new TreeNode(5);
    node.right = new TreeNode(13);
    node.left = new TreeNode(2);
    node.left.left = new TreeNode(1);
    node.left.right = new TreeNode(3);
    TreeNode result = new ConvertBSTToGreaterTree().convertBST(node);
    System.out.println(result);
  }

  public TreeNode convertBST(TreeNode root) {
    postOrder(root, 0);
    return root;
  }

  private int postOrder(TreeNode node, int value) {
    if (node == null) return value;
    int right = postOrder(node.right, value);
    node.val = node.val + right;
    return postOrder(node.left, node.val);
  }
}
