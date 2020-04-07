//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface DBBlockButton : UIButton
{
    _Bool _didDetectBeginTracking;
    _Bool _didRunInit;
    CDUnknownBlockType _onTapBlock;
    CDUnknownBlockType _onHighlightBlock;
}

@property(copy, nonatomic) CDUnknownBlockType onHighlightBlock; // @synthesize onHighlightBlock=_onHighlightBlock;
@property(copy, nonatomic) CDUnknownBlockType onTapBlock; // @synthesize onTapBlock=_onTapBlock;
- (void).cxx_destruct;
- (void)db_touchUpInside:(id)arg1 event:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)db_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
