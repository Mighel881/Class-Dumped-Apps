//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCLoadingViewProtocol-Protocol.h"

@protocol ACCProcessViewProtcol <ACCLoadingViewProtocol>
@property(copy, nonatomic) CDUnknownBlockType cancelBlock;
@property(nonatomic) _Bool cancelable;
@property(nonatomic) double progress;
- (void)allowUserInteraction:(_Bool)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)showAnimated:(_Bool)arg1;
@end
