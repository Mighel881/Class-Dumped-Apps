//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AWEMusicModel, NSString;

@protocol AWEAppleMusicPlayProtocol
@property(retain, nonatomic) AWEMusicModel *model;
@property(copy, nonatomic) NSString *productID;
@property(copy, nonatomic) NSString *musicID;
- (void)prepareToPlayWithCompletionHandler:(void (^)(NSError *))arg1;
@end
