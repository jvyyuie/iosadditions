/*
 选择图片上传的时候，如果图片是横着的，说明没有进行正确的旋转操作
 */
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIImage (orientation)

- (UIImage*) createRightOrientationImage;

@end