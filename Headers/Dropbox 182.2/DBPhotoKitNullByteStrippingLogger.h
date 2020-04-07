//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBPhotoKitNullByteStrippingLogger-Protocol.h>

@protocol DBAnalyticsLogger;

@interface DBPhotoKitNullByteStrippingLogger : NSObject <DBPhotoKitNullByteStrippingLogger>
{
    id <DBAnalyticsLogger> _analyticsLogger;
}

+ (id)loggerWithAnalyticsLogger:(id)arg1;
- (void).cxx_destruct;
- (void)nullByteStripUnsupportedFileTypePaddedWithNullBytesForExtension:(id)arg1 numNullBytesFound:(unsigned long long)arg2;
- (void)nullByteStripCompleted:(_Bool)arg1 duration:(double)arg2 fileExtension:(id)arg3 fileSizeBeforeStrip:(unsigned long long)arg4 fileSizeAfterStrip:(unsigned long long)arg5;
- (void)nullByteStripUnsupportedFileExtension:(id)arg1;
- (void)nullByteStripFailedOnSegment:(id)arg1 fileExtension:(id)arg2;
- (id)initWithAnalyticsLogger:(id)arg1;

@end
