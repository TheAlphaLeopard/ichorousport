// gml_Script_anon_3555_gml_Object_oBossEmbrace_Create_0 @ 0x140727b80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * gml_Script_anon_3555_gml_Object_oBossEmbrace_Create_0
                   (longlong *param_1,ulonglong param_2,double *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  double *pdVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined4 uVar11;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 **ppuVar12;
  double **ppdVar13;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  double local_238;
  uint local_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  double local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  double local_1c8 [2];
  double local_1b8 [2];
  double local_1a8 [2];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 local_dc;
  longlong *local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  double *local_b8;
  double *local_b0;
  double *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_1e0 = "gml_Script_anon@1840@gml_Object_oBossEmbrace_Create_0";
  local_1e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e8;
  local_1d8 = 0x47;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_1c8,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_1fc = 0xffffff;
  local_208 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  uStack_1ec = 0xffffff;
  local_1f8 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_24c = 0;
  local_258 = 0;
  local_21c = 0;
  local_228 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  local_238 = 0.0;
  local_1d8 = 0x49;
  do {
    local_22c = 0;
LAB_140727ce0:
    while( true ) {
      while( true ) {
        uVar11 = (undefined4)((ulonglong)pcVar7 >> 0x20);
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57530);
        if (pdVar4 != local_1c8) {
          local_248 = *pdVar4;
          uStack_240 = pdVar4[1];
          if ((1 << ((byte)local_1c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1c8);
          }
          FUN_140041b80(local_1c8,&local_248);
        }
        local_b8 = local_1c8;
        ppuVar12 = &local_b8;
        uVar8 = CONCAT44(uVar11,DAT_1419f5e98);
        uVar5 = FUN_140e634e0(param_1,param_2,&local_258,1,uVar8,ppuVar12);
        iVar2 = FUN_140e851f0(&local_238,uVar5,DAT_141955260,1);
        if ((iVar2 == -2) || (-1 < iVar2)) {
          local_1d8 = 0x56;
          if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_258);
          }
          local_258 = 0;
          local_250 = 0;
          local_24c = 5;
          uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
          FUN_140e87440(uVar5,DAT_141a06e78,0x80000000,&local_148,uVar8 & 0xffffffffffffff00,
                        (ulonglong)ppuVar12 & 0xffffffffffffff00);
          uVar5 = FUN_140069500(uVar5);
          pdVar4 = (double *)FUN_140e63610(uVar5,param_2,&local_258,0,&local_148,0);
          if (pdVar4 != param_3) {
            local_248 = *pdVar4;
            uStack_240 = pdVar4[1];
            if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(param_3);
            }
            FUN_140041b80(param_3,&local_248);
          }
          if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_258);
          }
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
          if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          _eh_vector_destructor_iterator_(local_1c8,0x10,8,FUN_140041b30);
          DAT_141dc7a50 = (undefined8 *)local_1e8;
          return param_3;
        }
        local_1d8 = 0x4a;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        uVar11 = (undefined4)(uVar8 >> 0x20);
        local_228 = 0;
        local_220 = 0;
        local_21c = 5;
        pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57530);
        if (pdVar4 != local_1b8) {
          local_248 = *pdVar4;
          uStack_240 = pdVar4[1];
          if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1b8);
          }
          FUN_140041b80(local_1b8,&local_248);
        }
        local_b0 = local_1b8;
        local_a8 = &local_238;
        ppdVar13 = &local_b0;
        uVar8 = CONCAT44(uVar11,DAT_1419f5a78);
        puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_228,2,uVar8,ppdVar13);
        if (puVar6 != &local_208) {
          local_248 = (double)*puVar6;
          uStack_240 = (double)puVar6[1];
          if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          FUN_140041b80(&local_208,&local_248);
        }
        local_1d8 = 0x4b;
        uStack_70 = CONCAT44(0xd,(undefined4)uStack_70);
        local_78 = 0;
        local_248 = 0.0;
        uStack_240 = (double)uStack_70;
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        FUN_140041b80(&local_218,&local_248);
        local_1d8 = 0x4d;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        uVar8 = uVar8 & 0xffffffffffffff00;
        FUN_140e87440(&local_208,DAT_141a1f4e0,0x80000000,&local_1f8,uVar8,
                      (ulonglong)ppdVar13 & 0xffffffffffffff00);
        uVar11 = (undefined4)(uVar8 >> 0x20);
        local_248 = local_1f8;
        uStack_240 = (double)CONCAT44(uStack_1ec,uStack_1f0);
        if ((1 << ((byte)local_1c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c8);
        }
        FUN_140041b80(local_1c8,&local_248);
        local_b8 = local_1c8;
        ppuVar12 = &local_b8;
        pcVar7 = (code *)CONCAT44(uVar11,DAT_141a02ef8);
        uVar5 = FUN_140e634e0(param_1,param_2,&local_258,1,pcVar7,ppuVar12);
        cVar1 = FUN_140e491e0(uVar5);
        if (cVar1 != '\0') {
          uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
          uVar8 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
          pcVar7 = (code *)((ulonglong)pcVar7 & 0xffffffffffffff00);
          FUN_140e87440(uVar5,DAT_141a06cb8,0x80000000,&local_f8,pcVar7,uVar8);
          cVar1 = FUN_140e491e0(&local_f8);
          if (cVar1 == '\0') {
            local_1d8 = 0x4e;
            if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            local_228 = 0;
            local_220 = 0;
            local_21c = 5;
            FUN_140e87440(&local_208,DAT_141a1f4e0,0x80000000,&local_1f8,
                          (ulonglong)pcVar7 & 0xffffffffffffff00,uVar8 & 0xffffffffffffff00);
            plVar9 = param_1;
            uVar8 = param_2;
            FUN_140e87170(&local_1f8,DAT_1419fe0e8,0x80000000,&local_108,param_1,param_2);
            FUN_140e87440(&local_208,DAT_141a1f4e0,0x80000000,&local_1f8,
                          (ulonglong)plVar9 & 0xffffffffffffff00,uVar8 & 0xffffffffffffff00);
            plVar9 = param_1;
            uVar8 = param_2;
            FUN_140e87170(&local_1f8,DAT_1419fe158,0x80000000,&local_118,param_1,param_2);
            local_dc = 6;
            uVar8 = uVar8 & 0xffffffffffffff00;
            uVar10 = (ulonglong)plVar9 & 0xffffffffffffff00;
            local_e8 = param_1;
            FUN_140e87440(&local_e8,DAT_1419fe0e8,0x80000000,&local_128,uVar10,uVar8);
            if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_e8);
            }
            local_cc = 6;
            uVar10 = uVar10 & 0xffffffffffffff00;
            local_d8 = param_1;
            FUN_140e87440(&local_d8,DAT_1419fe158,0x80000000,&local_138,uVar10,
                          uVar8 & 0xffffffffffffff00);
            uVar11 = (undefined4)(uVar10 >> 0x20);
            if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_d8);
            }
            local_248 = (double)local_108;
            uStack_240 = (double)CONCAT44(uStack_fc,uStack_100);
            if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1b8);
            }
            FUN_140041b80(local_1b8,&local_248);
            local_b0 = local_1b8;
            local_248 = (double)local_118;
            uStack_240 = (double)CONCAT44(uStack_10c,uStack_110);
            if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1a8);
            }
            FUN_140041b80(local_1a8,&local_248);
            local_a8 = local_1a8;
            local_248 = (double)local_128;
            uStack_240 = (double)CONCAT44(uStack_11c,uStack_120);
            if ((1 << (local_198[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_198);
            }
            FUN_140041b80(local_198,&local_248);
            local_a0 = local_198;
            local_248 = (double)local_138;
            uStack_240 = (double)CONCAT44(uStack_12c,uStack_130);
            if ((1 << (local_188[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_188);
            }
            FUN_140041b80(local_188,&local_248);
            uStack_5c = 0xf;
            local_68 = 0x100000000000029;
            local_248 = 7.291122019556464e-304;
            uStack_240 = (double)CONCAT44(0xf,uStack_60);
            local_98 = local_188;
            if ((1 << (local_178[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_178);
            }
            FUN_140041b80(local_178,&local_248);
            local_90 = local_178;
            local_248 = (double)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
            uStack_240 = (double)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
            if ((1 << (local_168[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_168);
            }
            FUN_140041b80(local_168,&local_248);
            local_88 = local_168;
            local_248 = (double)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
            uStack_240 = (double)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
            if ((1 << (local_158[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_158);
            }
            FUN_140041b80(local_158,&local_248);
            local_80 = local_158;
            pcVar7 = (code *)CONCAT44(uVar11,DAT_1419f60a8);
            uVar5 = FUN_140e634e0(param_1,param_2,&local_228,7,pcVar7,&local_b0);
            local_bc = 0;
            local_c8 = 0xc010000000000000;
            iVar2 = FUN_140e851f0(uVar5,&local_c8,DAT_141955260,0);
            if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_c8);
            }
            if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_218);
            }
            local_20c = 0xd;
            if (iVar2 == 0) {
              local_218 = 0;
            }
            else {
              local_218 = 0x3ff0000000000000;
            }
          }
        }
        local_1d8 = 0x51;
        cVar1 = FUN_140e491e0(&local_218);
        uVar11 = (undefined4)((ulonglong)pcVar7 >> 0x20);
        if (cVar1 == '\0') break;
        local_1d8 = 0x52;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57530);
        if (pdVar4 != local_1c8) {
          local_248 = *pdVar4;
          uStack_240 = pdVar4[1];
          if ((1 << ((byte)local_1c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1c8);
          }
          FUN_140041b80(local_1c8,&local_248);
        }
        local_b8 = local_1c8;
        local_b0 = &local_238;
        pcVar7 = (code *)CONCAT44(uVar11,DAT_1419f5938);
        FUN_140e634e0(param_1,param_2,&local_258,2,pcVar7,&local_b8);
      }
      local_1d8 = 0x54;
      uVar3 = local_22c & 0xffffff;
      if (uVar3 != 0) break;
LAB_1407284ed:
      local_238 = local_238 + 1.0;
    }
    if (uVar3 != 1) {
      if (uVar3 == 7) {
        local_238 = (double)CONCAT44(local_238._4_4_,local_238._0_4_ + 1);
      }
      else if (uVar3 == 10) {
        local_238 = (double)((longlong)local_238 + 1);
      }
      else {
        if (uVar3 == 0xd) {
          local_22c = 0;
          goto LAB_1407284ed;
        }
        FUN_140042910(&DAT_14172c3d8,&local_238,&local_238);
      }
      goto LAB_140727ce0;
    }
    local_238 = (double)FUN_140e4b060(&local_238);
    local_238 = local_238 + 1.0;
  } while( true );
}

