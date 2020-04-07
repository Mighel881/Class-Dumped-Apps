//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FileFormats : NSObject
{
}

+ (_Bool)extension_isThumbnailableFormatWithFilePath:(id)arg1;
+ (_Bool)fileProvider_isThumbnailableFormatWithFilePath:(id)arg1;
+ (id)sanitizeExtensionForAnalyticsWithPathString:(id)arg1;
+ (id)sanitizeExtensionForAnalyticsWithNSURL:(id)arg1;
+ (id)sanitizeExtensionForAnalyticsWithDBDropboxPath:(id)arg1;
+ (_Bool)isPotentialPackageFileFormatWithFilePath:(id)arg1;
+ (_Bool)isLinkFileFormat:(id)arg1;
+ (_Bool)isTextFileFormat:(id)arg1;
+ (_Bool)isPrintableDocumentFormatWithFilePath:(id)arg1;
+ (_Bool)isPresentationFormatWithFilePath:(id)arg1;
+ (_Bool)isCSVFileFormat:(id)arg1;
+ (_Bool)isExcelFileFormat:(id)arg1;
+ (_Bool)isXMLFileFormat:(id)arg1;
+ (_Bool)isHTMLFileFormat:(id)arg1;
+ (_Bool)isReadableFormatWithFilePath:(id)arg1;
+ (_Bool)isSourceFileWithFilePath:(id)arg1;
+ (_Bool)isNonWebDocumentFormatWithFilePath:(id)arg1;
+ (_Bool)isDocumentFormatWithFilePath:(id)arg1;
+ (_Bool)isPDFDocumentFile:(id)arg1;
+ (_Bool)isPDFPreviewableFile:(id)arg1;
+ (_Bool)isIWorkDocument:(id)arg1;
+ (_Bool)isRawPhotoFormatWithFileExtension:(id)arg1;
+ (_Bool)isLightboxDownloadOriginalWhiteListWithFilePath:(id)arg1;
+ (_Bool)isGifFormatWithFilePath:(id)arg1;
+ (_Bool)isPhotoFormatWithFilePath:(id)arg1;
+ (_Bool)isPossiblyCamrollCompatibleFormatWithFilePath:(id)arg1;
+ (_Bool)isThumbnailableFormatWithFilePath:(id)arg1;
+ (_Bool)isPossiblyStreamableFormatWithFilePath:(id)arg1;
+ (_Bool)isAudioFormatWithFilePath:(id)arg1;
+ (_Bool)isUsuallyPlayableMovieFormatWithFilePath:(id)arg1;
+ (_Bool)isServerStreamableVideoFormatWithFilePath:(id)arg1;
+ (_Bool)isMovieFormatWithFilePath:(id)arg1;
+ (_Bool)isThumbnailableDocumentFormatWithFilePath:(id)arg1;
+ (_Bool)isNonPreviewableFileWithFilePath:(id)arg1;
+ (_Bool)isExtensionForPath:(id)arg1 inSet:(id)arg2;

@end
