//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEEditorStickerGestureProtocol-Protocol.h"

@class UIGestureRecognizer, UIView;

@protocol ACCEditorStickerArtboardProtocol <AWEEditorStickerGestureProtocol>
- (UIView *)currentOperationView;
- (_Bool)isInOperations;
- (_Bool)isChildView:(UIView *)arg1;
- (UIView *)targetViewFor:(UIGestureRecognizer *)arg1;

@optional
- (void)endEditIfNeeded:(UIGestureRecognizer *)arg1 onTargetChange:(UIView *)arg2;
@end
