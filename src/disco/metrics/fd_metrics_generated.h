/* This file is not actually currently generated but should be. */

#define FD_METRICS_GROUP_MUX_OFF (0UL)

#define FD_METRICS_MUX_IN_BACKP_OFF               (0UL)
#define FD_METRICS_MUX_IN_BACKP_SZ                (8UL)
#define FD_METRICS_MUX_BACKP_OFF                  (FD_METRICS_MUX_IN_BACKP_OFF           + FD_METRICS_MUX_IN_BACKP_SZ)
#define FD_METRICS_MUX_BACKP_SZ                   (8UL)
#define FD_METRICS_MUX_HOUSEKEEPING_TICKS_OFF     (FD_METRICS_MUX_BACKP_OFF              + FD_METRICS_MUX_BACKP_SZ)
#define FD_METRICS_MUX_HOUSEKEEPING_TICKS_BUCKETS (16UL)
#define FD_METRICS_MUX_HOUSEKEEPING_TICKS_SZ      (8UL * FD_METRICS_MUX_HOUSEKEEPING_TICKS_BUCKETS)
#define FD_METRICS_MUX_BACKP_TICKS_OFF            (FD_METRICS_MUX_HOUSEKEEPING_TICKS_OFF + FD_METRICS_MUX_HOUSEKEEPING_TICKS_SZ)
#define FD_METRICS_MUX_BACKP_TICKS_BUCKETS        (16UL)
#define FD_METRICS_MUX_BACKP_TICKS_SZ             (8UL * FD_METRICS_MUX_BACKP_TICKS_BUCKETS)
#define FD_METRICS_MUX_CAUGHT_UP_TICKS_OFF        (FD_METRICS_MUX_BACKP_TICKS_OFF        + FD_METRICS_MUX_BACKP_TICKS_SZ)
#define FD_METRICS_MUX_CAUGHT_UP_TICKS_BUCKETS    (16UL)
#define FD_METRICS_MUX_CAUGHT_UP_TICKS_SZ         (8UL * FD_METRICS_MUX_CAUGHT_UP_TICKS_BUCKETS)
#define FD_METRICS_MUX_OVRNP_TICKS_OFF            (FD_METRICS_MUX_CAUGHT_UP_TICKS_OFF    + FD_METRICS_MUX_CAUGHT_UP_TICKS_SZ)
#define FD_METRICS_MUX_OVRNP_TICKS_BUCKETS        (16UL)
#define FD_METRICS_MUX_OVRNP_TICKS_SZ             (8UL * FD_METRICS_MUX_OVRNP_TICKS_BUCKETS)
#define FD_METRICS_MUX_OVRNR_TICKS_OFF            (FD_METRICS_MUX_OVRNP_TICKS_OFF        + FD_METRICS_MUX_OVRNP_TICKS_SZ)
#define FD_METRICS_MUX_OVRNR_TICKS_BUCKETS        (16UL)
#define FD_METRICS_MUX_OVRNR_TICKS_SZ             (8UL * FD_METRICS_MUX_OVRNR_TICKS_BUCKETS)
#define FD_METRICS_MUX_FILTER1_TICKS_OFF          (FD_METRICS_MUX_OVRNR_TICKS_OFF        + FD_METRICS_MUX_OVRNR_TICKS_SZ)
#define FD_METRICS_MUX_FILTER1_TICKS_BUCKETS      (16UL)
#define FD_METRICS_MUX_FILTER1_TICKS_SZ           (8UL * FD_METRICS_MUX_FILTER1_TICKS_BUCKETS)
#define FD_METRICS_MUX_FILTER2_TICKS_OFF          (FD_METRICS_MUX_FILTER1_TICKS_OFF      + FD_METRICS_MUX_FILTER1_TICKS_SZ)
#define FD_METRICS_MUX_FILTER2_TICKS_BUCKETS      (16UL)
#define FD_METRICS_MUX_FILTER2_TICKS_SZ           (8UL * FD_METRICS_MUX_FILTER2_TICKS_BUCKETS)
#define FD_METRICS_MUX_FILTER2_FRAG_SZ_OFF        (FD_METRICS_MUX_FILTER2_TICKS_OFF      + FD_METRICS_MUX_FILTER2_TICKS_SZ)
#define FD_METRICS_MUX_FILTER2_FRAG_SZ_BUCKETS    (16UL)
#define FD_METRICS_MUX_FILTER2_FRAG_SZ_SZ         (8UL * FD_METRICS_MUX_FILTER2_FRAG_SZ_BUCKETS)
#define FD_METRICS_MUX_FIN_TICKS_OFF              (FD_METRICS_MUX_FILTER2_FRAG_SZ_OFF    + FD_METRICS_MUX_FILTER2_FRAG_SZ_SZ)
#define FD_METRICS_MUX_FIN_TICKS_BUCKETS          (16UL)
#define FD_METRICS_MUX_FIN_TICKS_SZ               (8UL * FD_METRICS_MUX_FIN_TICKS_BUCKETS)
#define FD_METRICS_MUX_FIN_FRAG_SZ_OFF            (FD_METRICS_MUX_FIN_TICKS_OFF          + FD_METRICS_MUX_FIN_TICKS_SZ)
#define FD_METRICS_MUX_FIN_FRAG_SZ_BUCKETS        (16UL)
#define FD_METRICS_MUX_FIN_FRAG_SZ_SZ             (8UL * FD_METRICS_MUX_FIN_FRAG_SZ_BUCKETS)

#define FD_METRICS_GROUP_QUIC_OFF (FD_METRICS_MUX_FIN_FRAG_SZ_OFF + FD_METRICS_MUX_FIN_FRAG_SZ_SZ)

#define FD_METRICS_QUIC_CONN_LIVE_CNT_OFF         (FD_METRICS_GROUP_QUIC_OFF)
#define FD_METRICS_QUIC_CONN_LIVE_CNT_SZ          (8UL)
#define FD_METRICS_QUIC_CONN_SEQ_OFF              (FD_METRICS_QUIC_CONN_LIVE_CNT_OFF + FD_METRICS_QUIC_CONN_LIVE_CNT_SZ)
#define FD_METRICS_QUIC_CONN_SEQ_SZ               (8UL)

#define FD_METRICS_TOTAL_SZ (FD_METRICS_QUIC_CONN_SEQ_OFF + FD_METRICS_QUIC_CONN_SEQ_SZ)
