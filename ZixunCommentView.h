//
//  ZixunCommentView.h
//  ASK
//
//  Created by zhuanghaishao on 15/4/21.
//  Copyright (c) 2015年 yiyaowang. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef  void(^SendAction)(NSString *text);

@interface ZixunCommentView : UIView

@property (nonatomic, copy) SendAction sendAction;
@property (nonatomic, assign) BOOL enable;

- (void)reset;

- (void)resign;

@end
