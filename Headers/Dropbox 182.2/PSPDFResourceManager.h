//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PDFCResourceManager;

@interface PSPDFResourceManager : NSObject
{
    PDFCResourceManager *_resourceManager;
    NSArray *_embeddedFiles;
}

@property(copy, nonatomic) NSArray *embeddedFiles; // @synthesize embeddedFiles=_embeddedFiles;
@property(readonly, nonatomic) PDFCResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
- (void).cxx_destruct;
- (id)findEmbeddedFilesInDocument:(id)arg1;
- (id)createFileResourceForAnnotation:(id)arg1 fileResourceInformation:(id)arg2 dataProvider:(id)arg3 error:(id *)arg4;
- (_Bool)setSoundData:(id)arg1 forAnnotation:(id)arg2 error:(id *)arg3;
- (_Bool)setImage:(id)arg1 forAnnotation:(id)arg2 contentMode:(long long)arg3 error:(id *)arg4;
- (id)fetchFileResourceInformationWithDocument:(id)arg1 annotation:(id)arg2 withIdentifier:(id)arg3 error:(id *)arg4;
- (id)fetchImageForAnnotation:(id)arg1 withIdentifier:(id)arg2 transform:(out struct CGAffineTransform *)arg3 error:(id *)arg4;
- (id)djinniAnnotationFromAnnotation:(id)arg1 error:(id *)arg2;
- (_Bool)fetchResourceWithDocument:(id)arg1 annotation:(id)arg2 withIdentifier:(id)arg3 intoDataSink:(id)arg4 error:(id *)arg5;
- (_Bool)isAttachedToCore:(id)arg1 error:(id *)arg2;
- (id)init;

@end
