//
//  UIView+SRSheetSlide.h
//
//  Created by sino on 2019/4/3.
//  Copyright © 2019 sino. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^ViewClickBlock)(void);

@interface UIView (SRSheetSlide)

@property(nonatomic,assign)CGFloat sr_x;
@property(nonatomic,assign)CGFloat sr_y;
@property(nonatomic,assign)CGFloat sr_width;
@property(nonatomic,assign)CGFloat sr_height;
@property(nonatomic,assign)CGSize sr_size;
@property(nonatomic,copy)ViewClickBlock sr_viewClickBlock;

@end

NS_ASSUME_NONNULL_END
