//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSURL;
@protocol NSCopying><NSCoding><NSObject, NSFilePresenter;

@interface PSPDFFileChangeTracker : NSObject
{
    struct UnfairLock _fileChangeCheckLock;
    _Bool _cachedAPFSState;
    NSURL *_cachedAPFSStateURL;
    id <NSFilePresenter> _filePresenter;
    NSDate *_recordedModificationDate;
    id <NSCopying><NSCoding><NSObject> _recordedGenerationID;
}

@property(retain) id <NSCopying><NSCoding><NSObject> recordedGenerationID; // @synthesize recordedGenerationID=_recordedGenerationID;
@property(retain) NSDate *recordedModificationDate; // @synthesize recordedModificationDate=_recordedModificationDate;
@property(readonly, nonatomic) __weak id <NSFilePresenter> filePresenter; // @synthesize filePresenter=_filePresenter;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)fileChangeCheckLocked_isAPFSFileSystemAtURL:(id)arg1;
- (id)resourceValuesForCoordinatedURL:(id)arg1 forKeys:(id)arg2 error:(id *)arg3;
- (id)resourceValuesForKeys:(id)arg1 error:(id *)arg2;
- (_Bool)getContentsChanged:(out _Bool *)arg1 atCoordinatedURL:(id)arg2 updateModificationDate:(_Bool)arg3 error:(id *)arg4;
- (_Bool)getContentsChanged:(out _Bool *)arg1 updateModificationDate:(_Bool)arg2 error:(id *)arg3;
- (void)markWriteForCoordinatedFileURL:(id)arg1;
- (_Bool)markReadAndCheckContentChangesForCoordinatedFileURL:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)initWithFilePresenter:(id)arg1;
- (id)init;

@end

