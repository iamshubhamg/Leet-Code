public class NextRightPointerII {

  public static void main(String[] args) throws Exception {
    TreeLinkNode root = new TreeLinkNode(1);
    root.left = new TreeLinkNode(2);
    root.right = new TreeLinkNode(3);
    root.right.right = new TreeLinkNode(4);
    root.right.right.left = new TreeLinkNode(5);
    root.right.right.right = new TreeLinkNode(6);
    new NextRightPointerII().connect(root);
  }

  public void connect(TreeLinkNode root) {
    TreeLinkNode prev = new TreeLinkNode(0);
    TreeLinkNode first = null;
    while (root != null) {
      if (root.left != null) {
        prev.next = root.left;
        prev = root.left;
        if (first == null) {
          first = root.left;
        }
      }
      if (root.right != null) {
        prev.next = root.right;
        prev = root.right;
        if (first == null) {
          first = root.right;
        }
      }
      root = root.next;
      if (root == null) {
        root = first;
        first = null;
        prev = new TreeLinkNode(0);
      }
    }
  }

  public static class TreeLinkNode {
    int val;
    TreeLinkNode left, right, next;

    TreeLinkNode(int x) {
      val = x;
    }
  }
}
