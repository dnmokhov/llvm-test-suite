#include <Foundation/NSObject.h>
#include <stdio.h>

@interface A : NSObject {
  int x;
  char y;
}

@property int x;
@property char y;
@end

@implementation A
-(int) x { 
  return x + 2;
}

-(void) setX: (int) arg {
  x = arg * 3 + 1;
}

@synthesize y;
@end

int main() {
  A *a = [[A alloc] init];
  int res = (a.x += 1);
  printf("res: %d\n", res);

  res = (a.y = 0xFFFF);
  printf("res: %d\n", res);

  return 0;
}
