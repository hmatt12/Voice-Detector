#ifndef VD_DECODER_H_
#define VD_DECODER_H_

#include <FLAC++/decoder.h>

class Decoder: public FLAC::Decoder::File {
public:
    Decoder(FILE *audio_file);

protected:
    FILE *file;

    virtual ::FLAC__StreamDecoderWriteStatus write_callback(
            const ::FLAC__Frame *frame, const FLAC__int32 * const buffer[]);
    virtual void metadata_callback(const ::FLAC__StreamMetadata *metadata);
    virtual void error_callback(::FLAC__StreamDecoderErrorStatus err_status);
};

#endif // VD_DECODER_H_
