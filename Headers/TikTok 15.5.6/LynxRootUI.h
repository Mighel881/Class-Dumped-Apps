//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LynxUI.h"

@class LynxView;

@interface LynxRootUI : LynxUI
{
    LynxView *_lynxView;
}

@property(readonly, nonatomic) LynxView *lynxView; // @synthesize lynxView=_lynxView;
- (void)updateFrame:(struct CGRect)arg1 withPadding:(struct UIEdgeInsets)arg2 border:(struct UIEdgeInsets)arg3 withLayoutAnimation:(_Bool)arg4;
- (id)view;
- (id)createView;
- (id)initWithLynxView:(id)arg1;

@end
