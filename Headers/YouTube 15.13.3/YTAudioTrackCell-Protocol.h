//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCellProtocol-Protocol.h>

@class YTEditAudioTrackMetadata;

@protocol YTAudioTrackCell <YTCollectionViewCellProtocol>
@property(readonly, nonatomic) YTEditAudioTrackMetadata *trackMetadata;
@property(nonatomic) long long state;
- (void)setSelectTrackTarget:(id)arg1 action:(SEL)arg2;
- (void)setTogglePlayTarget:(id)arg1 action:(SEL)arg2;
@end
