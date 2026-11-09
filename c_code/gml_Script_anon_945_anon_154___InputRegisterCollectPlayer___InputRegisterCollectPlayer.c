// gml_Script_anon_945_anon_154___InputRegisterCollectPlayer___InputRegisterCollectPlayer @ 0x1400c3b10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_945_anon_154___InputRegisterCollectPlayer___InputRegisterCollectPlayer
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  double *pdVar6;
  double *pdVar7;
  longlong *plVar8;
  undefined4 uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  double dVar13;
  undefined4 uVar15;
  double **ppdVar14;
  double **ppdVar16;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  double local_218;
  uint local_20c;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  double local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong local_1a8;
  undefined4 local_19c;
  double local_198;
  uint local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  double local_158;
  undefined4 local_14c;
  double local_148;
  undefined4 local_13c;
  undefined1 local_138 [12];
  undefined4 local_12c;
  undefined1 local_128 [12];
  undefined4 local_11c;
  undefined1 local_118 [12];
  undefined4 local_10c;
  undefined1 local_108 [12];
  undefined4 local_fc;
  undefined1 local_f8 [12];
  undefined4 local_ec;
  undefined8 local_b8;
  undefined4 local_ac;
  double *local_a8;
  double *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 local_58;
  undefined4 local_4c;
  
  iVar12 = 0;
  local_1f8 = 0;
  local_1d0 = "gml_Script___InputUpdateGamepadPresence";
  local_1d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1d8;
  local_1c8 = 0xdd;
  uVar15 = 1;
  _eh_vector_constructor_iterator_(&local_158,0x10,10,FUN_1400424d0,FUN_140041b30);
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_20c = 0xffffff;
  local_218 = 0.0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  uStack_1ac = 0xffffff;
  local_1b8 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_22c = 0;
  local_238 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc7c0) &&
     (_Init_thread_header(&DAT_141ddc7c0), DAT_141ddc7c0 == -1)) {
    DAT_141ddc7a8 = (longlong *)FUN_140e63aa0(DAT_141a02798);
    _Init_thread_footer(&DAT_141ddc7c0);
  }
  if (DAT_141ddc050 == '\0') {
    FUN_140e64380(DAT_141ddc7a8,"gml_Script___InputUpdateGamepadPresence");
    FUN_140e64380(param_1,"gml_Script___InputUpdateGamepadPresence");
  }
  local_1c8 = 0xdf;
  if (DAT_141ddc050 == '\0') {
    DAT_141ddc050 = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a011a8);
    puVar5 = (undefined8 *)(**(code **)(*DAT_141ddc7a8 + 0x10))(DAT_141ddc7a8,DAT_141a01188);
    FUN_140e609c0(DAT_141ddc7a8);
    if (puVar4 != puVar5) {
      local_208 = (double)*puVar4;
      uStack_200 = *(undefined4 *)(puVar4 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_208);
    }
    FUN_140e60910(1);
  }
  local_1c8 = 0xe7;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  pdVar6 = (double *)(**(code **)(*DAT_141ddc7a8 + 8))(DAT_141ddc7a8,DAT_141a01188);
  local_208 = (double)CONCAT44(uRam0000000141dc6094,_DAT_141dc6090);
  uStack_200 = uRam0000000141dc6098;
  uStack_1fc = uRam0000000141dc609c;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_208);
  local_a8 = &local_158;
  uVar9 = 0;
  if ((*(int *)((longlong)pdVar6 + 0xc) == 2) && (*pdVar6 != 0.0)) {
    uVar9 = *(undefined4 *)((longlong)*pdVar6 + 0x24);
  }
  ppdVar14 = (double **)CONCAT44(uVar15,DAT_141a014d8);
  pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_188,0,ppdVar14,0);
  uStack_1dc = *(undefined4 *)((longlong)pdVar7 + 0xc);
  uStack_1e0 = *(undefined4 *)(pdVar7 + 1);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
    local_1e8 = *pdVar7;
  }
  else {
    FUN_1400419b0(&local_1e8,pdVar7);
  }
  local_1f8 = 2;
  uStack_1fc = 7;
  local_208 = (double)CONCAT44(local_208._4_4_,uVar9);
  FUN_1400462a0(&local_1e8,&local_208);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = local_1e8;
  uStack_200 = uStack_1e0;
  uStack_1fc = uStack_1dc;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_208);
  local_1f8 = 0;
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_a0 = &local_148;
  pdVar7 = (double *)FUN_140e79090(&local_238,2,&local_a8);
  if (pdVar7 != &local_198) {
    local_208 = *pdVar7;
    uStack_200 = *(undefined4 *)(pdVar7 + 1);
    uStack_1fc = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_208);
  }
  local_1c8 = 0xe8;
  dVar13 = local_198;
  if ((local_18c & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_198);
  }
  uVar11 = (ulonglong)dVar13;
  uVar10 = (uint)uVar11;
  while (uVar15 = (undefined4)((ulonglong)ppdVar14 >> 0x20), 0 < (int)uVar10) {
    uVar10 = (int)uVar11 - 1;
    uVar11 = (ulonglong)uVar10;
    local_1c8 = 0xea;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    pdVar6 = (double *)(**(code **)(*DAT_141ddc7a8 + 8))(DAT_141ddc7a8,DAT_141a01188);
    if (pdVar6 != &local_158) {
      local_208 = *pdVar6;
      uStack_200 = *(undefined4 *)(pdVar6 + 1);
      uStack_1fc = *(undefined4 *)((longlong)pdVar6 + 0xc);
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_208);
    }
    local_a8 = &local_158;
    local_208 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_200 = DAT_1419df7b8;
    uStack_1fc = DAT_1419df7bc;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_208);
    local_a0 = &local_148;
    ppdVar14 = (double **)CONCAT44(uVar15,DAT_1419fe568);
    FUN_140e634e0(param_1,param_2,&local_238,2,ppdVar14,&local_a8);
  }
  local_1c8 = 0xed;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_20c = 0;
  local_218 = 0.0;
  local_1c8 = 0xee;
  if ((*(int *)((longlong)pdVar6 + 0xc) == 2) && (*pdVar6 != 0.0)) {
    iVar12 = *(int *)((longlong)*pdVar6 + 0x24);
  }
joined_r0x0001400c4092:
  do {
    if (iVar12 < 1) {
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_58);
      }
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      _eh_vector_destructor_iterator_(&local_158,0x10,10,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_1d8;
      return param_3;
    }
    uVar15 = (undefined4)((ulonglong)ppdVar14 >> 0x20);
    iVar12 = iVar12 + -1;
    local_1c8 = 0xf0;
    (**(code **)(*DAT_141ddc7a8 + 8))(DAT_141ddc7a8,DAT_141a01188);
    plVar8 = (longlong *)(**(code **)(*DAT_141ddc7a8 + 8))(DAT_141ddc7a8,DAT_141a01188);
    iVar3 = FUN_140e4a740(&local_218);
    if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
      if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar8 != &local_1a8) {
      local_228 = (undefined4)*plVar8;
      uStack_224 = *(undefined4 *)((longlong)plVar8 + 4);
      uStack_220 = (undefined4)plVar8[1];
      uStack_21c = *(undefined4 *)((longlong)plVar8 + 0xc);
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_228);
    }
    local_1c8 = 0xf1;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    local_a8 = &local_218;
    ppdVar16 = &local_a8;
    ppdVar14 = (double **)CONCAT44(uVar15,DAT_1419fd258);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_238,1,ppdVar14,ppdVar16);
    if (puVar4 != &local_178) {
      local_228 = *(undefined4 *)puVar4;
      uStack_224 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_220 = *(undefined4 *)(puVar4 + 1);
      uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_228);
    }
    local_1c8 = 0xf3;
    iVar3 = FUN_140e851f0(&local_1a8,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar3 == 0) {
      local_1c8 = 0x10c;
      cVar2 = FUN_140e491e0(&local_178);
      if (cVar2 != '\0') {
        local_1c8 = 0x10e;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        local_228 = _DAT_1419e1950;
        uStack_224 = uRam00000001419e1954;
        uStack_220 = uRam00000001419e1958;
        uStack_21c = uRam00000001419e195c;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_228);
        local_228 = (undefined4)DAT_1419df7b0;
        uStack_224 = DAT_1419df7b0._4_4_;
        uStack_220 = DAT_1419df7b8;
        uStack_21c = DAT_1419df7bc;
LAB_1400c4495:
        local_a8 = &local_158;
        local_a0 = &local_218;
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_228);
        local_98 = local_138;
        local_228 = (undefined4)DAT_1419df7b0;
        uStack_224 = DAT_1419df7b0._4_4_;
        uStack_220 = DAT_1419df7b8;
        uStack_21c = DAT_1419df7bc;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_228);
        local_90 = local_128;
        local_228 = (undefined4)DAT_1419df7b0;
        uStack_224 = DAT_1419df7b0._4_4_;
        uStack_220 = DAT_1419df7b8;
        uStack_21c = DAT_1419df7bc;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_228);
        local_88 = local_118;
        local_228 = (undefined4)DAT_1419df7b0;
        uStack_224 = DAT_1419df7b0._4_4_;
        uStack_220 = DAT_1419df7b8;
        uStack_21c = DAT_1419df7bc;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_108);
        }
        FUN_140041b80(local_108,&local_228);
        local_80 = local_108;
        local_228 = (undefined4)DAT_1419df7b0;
        uStack_224 = DAT_1419df7b0._4_4_;
        uStack_220 = DAT_1419df7b8;
        uStack_21c = DAT_1419df7bc;
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_228);
        local_78 = local_f8;
        ppdVar14 = &local_a8;
        gml_GlobalScript___InputPlugInRegisterCallbackInternal
                  (param_1,param_2,&local_238,7,ppdVar14);
      }
    }
    else {
      local_1c8 = 0xf5;
      cVar2 = FUN_140e491e0(&local_178);
      if (cVar2 == '\0') {
        local_1c8 = 0x104;
        FUN_140e85f80(param_1,DAT_1419fd2a8,0x80000000,&local_1b8);
        ppdVar14 = (double **)((ulonglong)ppdVar14 & 0xffffffffffffff00);
        FUN_140e87440(&local_1a8,DAT_1419fd2b8,0x80000000,&local_b8,ppdVar14,
                      (ulonglong)ppdVar16 & 0xffffffffffffff00);
        uStack_1dc = uStack_1ac;
        uStack_1e0 = uStack_1b0;
        if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
          local_1e8 = local_1b8;
        }
        else {
          FUN_1400419b0(&local_1e8,&local_1b8);
        }
        local_1f8 = 4;
        FUN_1400462a0(&local_1e8,&local_b8);
        uStack_1fc = 0;
        local_208 = 300.0;
        uVar10 = FUN_140e851f0(&local_1e8,&local_208,DAT_141955260,1);
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_1f8 = 0;
        if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        if (uVar10 < 0x80000000) {
          local_1c8 = 0x106;
          if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          local_238 = 0;
          local_230 = 0;
          local_22c = 5;
          local_228 = _DAT_1419e1980;
          uStack_224 = uRam00000001419e1984;
          uStack_220 = uRam00000001419e1988;
          uStack_21c = uRam00000001419e198c;
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          FUN_140041b80(&local_158,&local_228);
          local_228 = _DAT_1419df7c0;
          uStack_224 = uRam00000001419df7c4;
          uStack_220 = uRam00000001419df7c8;
          uStack_21c = uRam00000001419df7cc;
          goto LAB_1400c4495;
        }
      }
      else {
        local_1c8 = 0x100;
        FUN_140e85f80(param_1,DAT_1419fd2a8,0x80000000,&local_1b8);
        local_228 = (undefined4)local_1b8;
        uStack_224 = local_1b8._4_4_;
        uStack_220 = uStack_1b0;
        uStack_21c = uStack_1ac;
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_228);
        FUN_140e87930(&local_1a8,DAT_1419fd2b8,0x80000000,&local_168);
      }
    }
    local_1c8 = 0x112;
    uVar10 = local_20c & 0xffffff;
    if (uVar10 != 0) {
      if (uVar10 == 1) {
        local_218 = (double)FUN_140e4b060(&local_218);
        local_20c = 0;
        goto LAB_1400c4647;
      }
      if (uVar10 == 7) {
        local_218 = (double)CONCAT44(local_218._4_4_,local_218._0_4_ + 1);
      }
      else if (uVar10 == 10) {
        local_218 = (double)((longlong)local_218 + 1);
      }
      else {
        if (uVar10 == 0xd) {
          local_20c = 0;
          goto LAB_1400c4647;
        }
        FUN_140042910(&DAT_14172c3d8,&local_218,&local_218);
      }
      goto joined_r0x0001400c4092;
    }
LAB_1400c4647:
    local_218 = local_218 + 1.0;
  } while( true );
}

