// gml_Object_oAcidGlob_Draw_0 @ 0x14067e500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oAcidGlob_Draw_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double *pdVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  code *pcVar10;
  ulonglong uVar11;
  undefined1 **in_stack_fffffffffffffdd0;
  ulonglong uVar12;
  double local_228;
  uint local_21c;
  double local_218;
  uint local_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 local_14c;
  longlong *local_148;
  undefined4 local_13c;
  undefined4 local_138 [3];
  undefined4 local_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  
  local_res18 = 0;
  local_1a0 = "gml_Object_oAcidGlob_Destroy_0";
  local_198 = 0;
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  pcVar10 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_128,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_16c = 0xffffff;
  local_178 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_20c = 0xffffff;
  local_218 = 0.0;
  local_21c = 0xffffff;
  local_228 = 0.0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  iVar5 = 5;
  do {
    iVar5 = iVar5 + -1;
    local_198 = 6;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    local_15c = 6;
    local_168 = local_res8;
    uVar12 = (ulonglong)in_stack_fffffffffffffdd0 & 0xffffffffffffff00;
    uVar11 = (ulonglong)pcVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_168,DAT_1419fe0e8,0x80000000,&local_178,uVar11,uVar12);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_14c = 6;
    local_158 = local_res8;
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(&local_158,DAT_1419fe158,0x80000000,&local_188,uVar11,uVar12 & 0xffffffffffffff00)
    ;
    uVar6 = (undefined4)(uVar11 >> 0x20);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_208 = (undefined4)local_178;
    uStack_204 = local_178._4_4_;
    uStack_200 = uStack_170;
    uStack_1fc = uStack_16c;
    if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_208);
    local_c8 = local_128;
    local_208 = (undefined4)local_188;
    uStack_204 = local_188._4_4_;
    uStack_200 = uStack_180;
    uStack_1fc = uStack_17c;
    if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_208);
    local_c0 = local_118;
    local_208 = _DAT_141dd5118;
    uStack_204 = uRam0000000141dd511c;
    uStack_200 = uRam0000000141dd5120;
    uStack_1fc = DAT_141dd5124;
    if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_208);
    local_b8 = local_108;
    uStack_dc = 0xf;
    local_e8 = 0x100000000000017;
    local_208 = 0x17;
    uStack_204 = 0x1000000;
    uStack_200 = uStack_e0;
    uStack_1fc = 0xf;
    if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_208);
    local_b0 = local_f8;
    in_stack_fffffffffffffdd0 = &local_c8;
    pcVar10 = (code *)CONCAT44(uVar6,DAT_141a0a7c8);
    uVar3 = FUN_140e634e0(local_res8,local_res10,&local_1e8,4,pcVar10,in_stack_fffffffffffffdd0);
    iVar2 = FUN_140e63cb0(local_a8,&local_res8,&local_res10,uVar3);
    if (0 < iVar2) {
      do {
        local_198 = 8;
        uStack_cc = 0xf;
        local_d8 = 0x100000100000038;
        local_208 = 0x38;
        uStack_204 = 0x1000001;
        uStack_200 = uStack_d0;
        uStack_1fc = 0xf;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_208);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1b8);
        local_198 = 9;
        local_13c = 6;
        local_148 = local_res8;
        in_stack_fffffffffffffdd0 =
             (undefined1 **)((ulonglong)in_stack_fffffffffffffdd0 & 0xffffffffffffff00);
        pcVar10 = (code *)((ulonglong)pcVar10 & 0xffffffffffffff00);
        FUN_140e87440(&local_148,DAT_141a0a778,0x80000000,&local_1d8,pcVar10,
                      in_stack_fffffffffffffdd0);
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_1ec = local_1cc;
        local_1f0 = local_1d0;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
          local_1f8 = local_1d8;
        }
        else {
          FUN_1400419b0(&local_1f8,&local_1d8);
        }
        local_res18 = 1;
        local_12c = 7;
        local_138[0] = 0xb4;
        FUN_1400460e0(&local_1f8,local_138);
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        uVar6 = FUN_140e794b0(0,0);
        uStack_1bc = local_1ec;
        uStack_1c0 = local_1f0;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
          local_1c8 = local_1f8;
        }
        else {
          FUN_1400419b0(&local_1c8,&local_1f8);
        }
        local_res18 = 3;
        FUN_140162c50(&local_1c8,uVar6);
        local_208 = (undefined4)local_1c8;
        uStack_204 = local_1c8._4_4_;
        uStack_200 = uStack_1c0;
        uStack_1fc = uStack_1bc;
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        FUN_140041b80(&local_218,&local_208);
        local_res18 = 1;
        if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_res18 = 0;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_198 = 10;
        dVar8 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_21c = 0;
        local_198 = 0xb;
        local_228 = dVar8;
        pdVar4 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        dVar8 = local_218;
        if ((local_20c & 0xffffff) != 0) {
          dVar8 = (double)FUN_140e4b060(&local_218);
        }
        dVar9 = local_228;
        if ((local_21c & 0xffffff) != 0) {
          dVar9 = (double)FUN_140e4b060(&local_228);
        }
        fVar7 = (float)FUN_140e78f90((float)dVar9,(float)dVar8);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar4);
        }
        *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
        *pdVar4 = (double)fVar7;
        local_198 = 0xc;
        pdVar4 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        dVar8 = local_218;
        if ((local_20c & 0xffffff) != 0) {
          dVar8 = (double)FUN_140e4b060(&local_218);
        }
        dVar9 = local_228;
        if ((local_21c & 0xffffff) != 0) {
          dVar9 = (double)FUN_140e4b060(&local_228);
        }
        fVar7 = (float)FUN_140e79010((float)dVar9,(float)dVar8);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar4);
        }
        *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
        *pdVar4 = (double)fVar7;
        cVar1 = FUN_140e643f0(local_a8,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_a8,&local_res8,&local_res10);
    if (local_98 != 0) {
      FUN_140e4cd60();
    }
  } while (0 < iVar5);
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  _eh_vector_destructor_iterator_(local_128,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return;
}

