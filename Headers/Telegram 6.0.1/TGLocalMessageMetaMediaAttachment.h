//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/TGMediaAttachment.h>

#import <TelegramUI/TGMediaAttachmentParser-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface TGLocalMessageMetaMediaAttachment : TGMediaAttachment <TGMediaAttachmentParser>
{
    int _localMediaId;
    NSMutableArray *_imageInfoList;
    NSMutableDictionary *_imageUrlToDataFile;
}

@property(nonatomic) int localMediaId; // @synthesize localMediaId=_localMediaId;
@property(retain, nonatomic) NSMutableDictionary *imageUrlToDataFile; // @synthesize imageUrlToDataFile=_imageUrlToDataFile;
@property(retain, nonatomic) NSMutableArray *imageInfoList; // @synthesize imageInfoList=_imageInfoList;
- (void).cxx_destruct;
- (id)parseMediaAttachment:(id)arg1;
- (void)serialize:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
