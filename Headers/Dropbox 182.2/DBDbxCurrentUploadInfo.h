//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface DBDbxCurrentUploadInfo : NSObject
{
    _Bool _isVideo;
    int _currentUpload;
    NSString *_localId;
    double _uploadProgress;
    NSArray *_uploadFileSize;
}

+ (id)dbxCurrentUploadInfoWithLocalId:(id)arg1 isVideo:(_Bool)arg2 uploadProgress:(double)arg3 uploadFileSize:(id)arg4 currentUpload:(int)arg5;
@property(readonly, nonatomic) int currentUpload; // @synthesize currentUpload=_currentUpload;
@property(readonly, nonatomic) NSArray *uploadFileSize; // @synthesize uploadFileSize=_uploadFileSize;
@property(readonly, nonatomic) double uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(readonly, nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(readonly, nonatomic) NSString *localId; // @synthesize localId=_localId;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithLocalId:(id)arg1 isVideo:(_Bool)arg2 uploadProgress:(double)arg3 uploadFileSize:(id)arg4 currentUpload:(int)arg5;

@end
