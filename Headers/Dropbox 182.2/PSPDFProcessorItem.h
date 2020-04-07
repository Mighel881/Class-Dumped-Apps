//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, PDFCItemConfiguration, UIImage;

@interface PSPDFProcessorItem : NSObject
{
    _Bool _shouldUseAlignment;
    UIImage *_image;
    NSURL *_itemURL;
    double _jpegCompressionQuality;
    long long _alignment;
    long long _zPosition;
    PDFCItemConfiguration *_coreItemConfiguration;
    struct CGAffineTransform _transform;
}

+ (id)processorItemWithItemURL:(id)arg1 builderBlock:(CDUnknownBlockType)arg2;
+ (id)processorItemWithImage:(id)arg1 jpegCompressionQuality:(double)arg2 builderBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) PDFCItemConfiguration *coreItemConfiguration; // @synthesize coreItemConfiguration=_coreItemConfiguration;
@property(readonly, nonatomic) long long zPosition; // @synthesize zPosition=_zPosition;
@property(readonly, nonatomic) _Bool shouldUseAlignment; // @synthesize shouldUseAlignment=_shouldUseAlignment;
@property(readonly, nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(readonly, nonatomic) double jpegCompressionQuality; // @synthesize jpegCompressionQuality=_jpegCompressionQuality;
@property(readonly, nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) NSURL *itemURL; // @synthesize itemURL=_itemURL;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)createItemConfiguration;
- (id)initWithImage:(id)arg1 withJpegCompressionQuality:(double)arg2 orItemURL:(id)arg3 builder:(id)arg4;

@end
