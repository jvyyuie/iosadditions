/*
 将原有的addtarget...方法简化成block机智
 */
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^ButtonBlock)(UIButton* btn);

@interface UIButton (block)
- (void)addAction:(ButtonBlock)block;
- (void)addAction:(ButtonBlock)block forControlEvents:(UIControlEvents)controlEvents;
@end