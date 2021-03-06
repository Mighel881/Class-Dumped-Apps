//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@protocol SwipeCellScrollViewTouchEventDelegate;

@interface XBXSwipeActionCellScrollView : UIScrollView
{
    id <SwipeCellScrollViewTouchEventDelegate> _touchDelegate;
}

@property(nonatomic) __weak id <SwipeCellScrollViewTouchEventDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;

@end

