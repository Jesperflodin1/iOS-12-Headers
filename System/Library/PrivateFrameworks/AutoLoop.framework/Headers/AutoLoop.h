#import <AutoLoop/PregateAnalyzer.h>
#import <AutoLoop/PregateFeatureBuilder.h>
#import <AutoLoop/LoopAudioComposer.h>
#import <AutoLoop/StabilizeParamGenerator.h>
#import <AutoLoop/IrisVideoMetadataExtractor.h>
#import <AutoLoop/ExifMetadataExtractor.h>
#import <AutoLoop/PipelineStatePromise.h>
#import <AutoLoop/MetalFAST9BRIEF.h>
#import <AutoLoop/ORBExtractionIntermediateBuffers.h>
#import <AutoLoop/VideoFrameWriterElement.h>
#import <AutoLoop/VideoFrameWriterQueue.h>
#import <AutoLoop/ImageRefSaver.h>
#import <AutoLoop/StableVideoWriter.h>
#import <AutoLoop/AutoLoopStabilizer.h>
#import <AutoLoop/AutoLoopStabilizationAnalysis.h>
#import <AutoLoop/ICHomographyWrapper.h>
#import <AutoLoop/ImageHomographyResampler.h>
#import <AutoLoop/MetalRANSACDispatcher.h>
#import <AutoLoop/CIHomographyResampler.h>
#import <AutoLoop/VideoReader.h>
#import <AutoLoop/VideoReaderRand.h>
#import <AutoLoop/LoopQuicktimeMetadata.h>
#import <AutoLoop/VideoAccessIndex.h>
#import <AutoLoop/VideoAccessIndexNorm.h>
#import <AutoLoop/GIFBuilder.h>
#import <AutoLoop/VideoContext.h>
#import <AutoLoop/VideoWriter.h>
#import <AutoLoop/StabilizeParams.h>
