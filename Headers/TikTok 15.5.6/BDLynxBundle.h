//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BDLyxnChannelConfig, NSString, NSURL;

@interface BDLynxBundle : NSObject
{
    _Bool _isSingleFile;
    NSString *_version;
    NSString *_groupID;
    NSURL *_rootDirURl;
    NSURL *_singleFilePath;
    NSURL *_rootDirURL;
    BDLyxnChannelConfig *_channelConfig;
}

@property(retain, nonatomic) BDLyxnChannelConfig *channelConfig; // @synthesize channelConfig=_channelConfig;
@property(retain, nonatomic) NSURL *rootDirURL; // @synthesize rootDirURL=_rootDirURL;
@property(retain, nonatomic) NSURL *singleFilePath; // @synthesize singleFilePath=_singleFilePath;
@property(readonly, nonatomic) NSURL *rootDirURl; // @synthesize rootDirURl=_rootDirURl;
@property(readonly, nonatomic) _Bool isSingleFile; // @synthesize isSingleFile=_isSingleFile;
@property(readonly, copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)lynxCardDataWithCardID:(id)arg1;
- (_Bool)updateDataWithSingleBundleFile:(id)arg1;
- (_Bool)updateDataWithRootDir:(id)arg1;
- (id)lynxExtraDataWithCardID:(id)arg1;
- (id)lynxDataWithCardID:(id)arg1;
- (id)initWithSingleBundleFileURL:(id)arg1 groupID:(id)arg2;
- (id)initWithRootDir:(id)arg1 groupID:(id)arg2;

@end
