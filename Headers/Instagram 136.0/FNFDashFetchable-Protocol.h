//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FNFDashFetchRange, NSData, NSString;

@protocol FNFDashFetchable
@property(readonly, nonatomic) NSString *representationId;
@property(readonly, nonatomic) long long track;
@property(readonly, nonatomic) FNFDashFetchRange *fetchRange;
- (_Bool)fetchCompleted;
- (void)finishFetch;
- (int)remainingFetchSize;
- (void)appendFetchedData:(NSData *)arg1;
- (void)resetFetch;
- (_Bool)fetchStarted;
- (void)startFetchWithRange:(FNFDashFetchRange *)arg1 representationId:(NSString *)arg2;
@end

