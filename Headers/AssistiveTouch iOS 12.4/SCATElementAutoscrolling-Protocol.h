//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCATElement-Protocol.h"

@protocol SCATElementAutoscrolling;

@protocol SCATElementAutoscrolling <SCATElement>
@property(readonly, nonatomic) _Bool scatIsAutoscrolling;
@property(retain, nonatomic) id <SCATElementAutoscrolling> scatAutoscrollTarget;
- (void)scatScrollToTop;
- (void)scatDecreaseAutoscrollSpeed;
- (void)scatIncreaseAutoscrollSpeed;
- (void)scatPauseAutoscrolling;
- (void)scatAutoscrollInDirection:(unsigned long long)arg1;
@end

