// gml_Script____struct___210_chunk_transition_RoomTransition @ 0x140442d20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___210_chunk_transition_RoomTransition
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  double *pdVar5;
  double *pdVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined4 local_res20;
  undefined4 uVar16;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 **ppuVar17;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  char *local_210;
  undefined4 local_208;
  double local_200;
  undefined4 local_1f8;
  uint local_1f4;
  double local_1f0;
  undefined4 local_1e8;
  uint local_1e4;
  double local_1e0;
  undefined4 local_1d8;
  uint local_1d4;
  double local_1d0;
  undefined4 local_1c8;
  uint local_1c4;
  undefined1 local_1b8 [16];
  undefined8 local_1a8 [2];
  undefined1 local_198 [12];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 *local_148;
  undefined8 *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  uint local_a8 [2];
  undefined8 *local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  
  local_res20 = 0;
  local_210 = "gml_Script_RoomTransition";
  local_218 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_218;
  local_208 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_a8,param_4,4,param_5);
  uVar16 = 1;
  _eh_vector_constructor_iterator_(local_1b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_21c = 0xffffff;
  local_228 = 0;
  uStack_22c = 0xffffff;
  local_238 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_26c = 0;
  local_278 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_208 = 1;
  uVar10 = (ulonglong)local_a8[0];
  if ((int)local_a8[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_a0[1];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_208 = 1;
    if ((int)local_a8[0] < 2) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_a0[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = &DAT_bff0000000000000;
  }
  if ((int)local_a8[0] < 3) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_a0[2];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_a8[0] < 3) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_a0[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x403e000000000000;
  }
  if ((int)local_a8[0] < 4) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_a0[3];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 != 0) goto LAB_140442fa8;
  FUN_140e645a0(&local_248,&LAB_140442cf0,local_res8);
  if ((int)local_a8[0] < 4) {
    puVar4 = &DAT_1419df7b0;
LAB_140442f59:
    uStack_250 = uStack_240;
    uStack_24c = uStack_23c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_258);
  }
  else {
    puVar4 = (undefined8 *)local_a0[3];
    if (&local_248 != puVar4) goto LAB_140442f59;
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
LAB_140442fa8:
  local_208 = 3;
  uStack_24c = 0xf;
  local_258 = (longlong *)0x10000000000013a;
  local_168 = 0x10000000000013a;
  uStack_160 = uStack_250;
  uStack_15c = 0xf;
  if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_168);
  local_148 = local_1b8;
  FUN_140edd0e0(local_res8,local_res10,1,&local_148);
  local_208 = 5;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  local_258 = (longlong *)CONCAT44(uRam0000000141dc65d4,_DAT_141dc65d0);
  uStack_250 = uRam0000000141dc65d8;
  uStack_24c = uRam0000000141dc65dc;
  if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_258);
  local_148 = local_1b8;
  local_258 = (longlong *)CONCAT44(uRam0000000141dc65d4,_DAT_141dc65d0);
  uStack_250 = uRam0000000141dc65d8;
  uStack_24c = uRam0000000141dc65dc;
  if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_258);
  local_258 = (longlong *)CONCAT44(uRam0000000141dd2d1c,_DAT_141dd2d18);
  uStack_250 = uRam0000000141dd2d20;
  uStack_24c = DAT_141dd2d24;
  local_140 = local_1a8;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_258);
  local_138 = local_198;
  uStack_24c = 0xf;
  local_258 = (longlong *)0x10000000000013a;
  local_168 = 0x10000000000013a;
  uStack_160 = uStack_250;
  uStack_15c = 0xf;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_168);
  local_130 = local_188;
  uVar3 = FUN_140e634e0(local_res8,local_res10,&local_278,4,CONCAT44(uVar16,DAT_141a0a7c8),
                        &local_148);
  iVar2 = FUN_140e63cb0(local_98,&local_res8,&local_res10,uVar3);
  if (0 < iVar2) {
    do {
      local_208 = 7;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
      FUN_140e609c0(local_res8);
      if ((int)local_a8[0] < 2) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)local_a0[1];
      }
      if (puVar7 != puVar4) {
        local_268 = *(undefined4 *)puVar7;
        uStack_264 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_260 = *(undefined4 *)(puVar7 + 1);
        uStack_25c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_268);
      }
      FUN_140e60910(1);
      local_208 = 8;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1d8a0);
      FUN_140e609c0(local_res8);
      if ((int)local_a8[0] < 3) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)local_a0[2];
      }
      if (puVar7 != puVar4) {
        local_268 = *(undefined4 *)puVar7;
        uStack_264 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_260 = *(undefined4 *)(puVar7 + 1);
        uStack_25c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_268);
      }
      FUN_140e60910(1);
      local_208 = 9;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f71d8);
      local_10c = 0xf;
      local_118 = 0x100000000000058;
      FUN_140e87170(&local_118,DAT_1419fe0e8,0x80000000,&local_228,local_res8,local_res10);
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140e609c0(local_res8);
      if (&local_228 != puVar4) {
        local_268 = (undefined4)local_228;
        uStack_264 = local_228._4_4_;
        uStack_260 = uStack_220;
        uStack_25c = uStack_21c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_268);
      }
      FUN_140e60910(1);
      local_208 = 10;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f71c8);
      local_fc = 0xf;
      local_108 = 0x100000000000058;
      FUN_140e87170(&local_108,DAT_1419fe158,0x80000000,&local_238,local_res8,local_res10);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140e609c0(local_res8);
      if (&local_238 != puVar4) {
        local_268 = (undefined4)local_238;
        uStack_264 = local_238._4_4_;
        uStack_260 = uStack_230;
        uStack_25c = uStack_22c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_268);
      }
      FUN_140e60910(1);
      local_208 = 0xb;
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_278 = 0;
      local_270 = 0;
      local_26c = 5;
      pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f71a8);
      local_ec = 0xf;
      local_f8 = 0x100000000000058;
      plVar14 = local_res8;
      FUN_140e87170(&local_f8,DAT_1419fe0e8,0x80000000,&local_228,local_res8,local_res10);
      uVar16 = (undefined4)((ulonglong)plVar14 >> 0x20);
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_158);
      local_268 = (undefined4)local_158;
      uStack_264 = local_158._4_4_;
      uStack_260 = uStack_150;
      uStack_25c = uStack_14c;
      if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_268);
      local_148 = local_1b8;
      FUN_140e609c0(local_res8);
      pdVar6 = (double *)
               FUN_140e634e0(local_res8,local_res10,&local_278,1,CONCAT44(uVar16,DAT_141a00c98),
                             &local_148);
      local_1f4 = *(uint *)((longlong)pdVar6 + 0xc);
      local_1f8 = *(undefined4 *)(pdVar6 + 1);
      if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) == 0) {
        local_200 = *pdVar6;
      }
      else {
        FUN_1400419b0(&local_200,pdVar6);
      }
      local_res20 = 1;
      local_dc = 0;
      local_e8 = 0x4000000000000000;
      FUN_140046500(&local_200,&local_e8);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_1d4 = local_1f4;
      local_1d8 = local_1f8;
      if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) == 0) {
        local_1e0 = local_200;
      }
      else {
        FUN_1400419b0(&local_1e0,&local_200);
      }
      local_res20 = 3;
      local_cc = 0;
      local_d8 = 0x3fe0000000000000;
      FUN_140042560(&local_1e0,&local_d8);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
        dVar12 = *pdVar5;
      }
      else {
        dVar12 = (double)FUN_140e4b060(pdVar5);
      }
      dVar13 = local_1e0;
      if ((local_1d4 & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_1e0);
      }
      fVar11 = (float)FUN_140e78f90((float)dVar13,(float)dVar12);
      uStack_16c = uStack_21c;
      uStack_170 = uStack_220;
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
        local_178 = local_228;
      }
      else {
        FUN_1400419b0(&local_178,&local_228);
      }
      local_res20 = 7;
      FUN_140162c50(&local_178,(double)fVar11);
      if (&local_178 != puVar4) {
        local_268 = (undefined4)local_178;
        uStack_264 = local_178._4_4_;
        uStack_260 = uStack_170;
        uStack_25c = uStack_16c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_268);
      }
      local_res20 = 3;
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_res20 = 1;
      if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e0);
      }
      local_res20 = 0;
      if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_200);
      }
      FUN_140e60910(1);
      local_208 = 0xc;
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_278 = 0;
      local_270 = 0;
      local_26c = 5;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f7198);
      pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
      local_bc = 0xf;
      local_c8 = 0x100000000000058;
      plVar14 = local_res8;
      FUN_140e87170(&local_c8,DAT_1419fe158,0x80000000,&local_238,local_res8,local_res10);
      uVar16 = (undefined4)((ulonglong)plVar14 >> 0x20);
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_158);
      local_268 = (undefined4)local_158;
      uStack_264 = local_158._4_4_;
      uStack_260 = uStack_150;
      uStack_25c = uStack_14c;
      if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_268);
      local_148 = local_1b8;
      FUN_140e609c0(local_res8);
      ppuVar17 = &local_148;
      uVar15 = CONCAT44(uVar16,DAT_141a00d58);
      pdVar6 = (double *)FUN_140e634e0(local_res8,local_res10,&local_278,1,uVar15,ppuVar17);
      local_1e4 = *(uint *)((longlong)pdVar6 + 0xc);
      local_1e8 = *(undefined4 *)(pdVar6 + 1);
      if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) == 0) {
        local_1f0 = *pdVar6;
      }
      else {
        FUN_1400419b0(&local_1f0,pdVar6);
      }
      local_res20 = 8;
      local_ac = 0;
      local_b8 = 0x4000000000000000;
      FUN_140046500(&local_1f0,&local_b8);
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      local_1c4 = local_1e4;
      local_1c8 = local_1e8;
      if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) == 0) {
        local_1d0 = local_1f0;
      }
      else {
        FUN_1400419b0(&local_1d0,&local_1f0);
      }
      local_res20 = 0x18;
      uStack_15c = 0;
      local_168 = 0x3fe0000000000000;
      FUN_140042560(&local_1d0,&local_168);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
        dVar12 = *pdVar5;
      }
      else {
        dVar12 = (double)FUN_140e4b060(pdVar5);
      }
      dVar13 = local_1d0;
      if ((local_1c4 & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_1d0);
      }
      fVar11 = (float)FUN_140e79010((float)dVar13,(float)dVar12);
      uStack_23c = uStack_22c;
      uStack_240 = uStack_230;
      if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
        local_248 = local_238;
      }
      else {
        FUN_1400419b0(&local_248,&local_238);
      }
      local_res20 = 0x38;
      FUN_140162c50(&local_248,(double)fVar11);
      if (&local_248 != puVar4) {
        local_268 = (undefined4)local_248;
        uStack_264 = local_248._4_4_;
        uStack_260 = uStack_240;
        uStack_25c = uStack_23c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_268);
      }
      local_res20 = 0x18;
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_res20 = 8;
      if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d0);
      }
      local_res20 = 0;
      if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f0);
      }
      FUN_140e60910(1);
      local_208 = 0xd;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f71e8);
      FUN_140e609c0(local_res8);
      if ((int)local_a8[0] < 1) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)*local_a0;
      }
      if (puVar7 != puVar4) {
        local_268 = *(undefined4 *)puVar7;
        uStack_264 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_260 = *(undefined4 *)(puVar7 + 1);
        uStack_25c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_268);
      }
      FUN_140e60910(1);
      local_208 = 0xe;
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_278 = 0;
      local_270 = 0;
      local_26c = 5;
      puVar8 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f7168);
      uStack_24c = 6;
      local_258 = local_res8;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_140e87440(&local_258,DAT_141a0a828,0x80000000,&local_128,uVar15,
                    (ulonglong)ppuVar17 & 0xffffffffffffff00);
      uVar16 = (undefined4)(uVar15 >> 0x20);
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_268 = (undefined4)local_128;
      uStack_264 = local_128._4_4_;
      uStack_260 = uStack_120;
      uStack_25c = uStack_11c;
      if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_268);
      local_148 = local_1b8;
      if ((int)local_a8[0] < 4) {
        puVar4 = &DAT_1419df7b0;
LAB_140443ce7:
        local_268 = *(undefined4 *)puVar4;
        uStack_264 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_260 = *(undefined4 *)(puVar4 + 1);
        uStack_25c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1a8);
        }
        FUN_140041b80(local_1a8,&local_268);
      }
      else {
        puVar4 = (undefined8 *)local_a0[3];
        if (puVar4 != local_1a8) goto LAB_140443ce7;
      }
      local_140 = local_1a8;
      FUN_140e609c0(local_res8);
      puVar9 = (undefined4 *)
               FUN_140e634e0(local_res8,local_res10,&local_278,2,CONCAT44(uVar16,DAT_1419fed78),
                             &local_148);
      if (puVar9 != puVar8) {
        local_268 = *puVar9;
        uStack_264 = puVar9[1];
        uStack_260 = puVar9[2];
        uStack_25c = puVar9[3];
        if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        FUN_140041b80(puVar8,&local_268);
      }
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_98,&local_res8,&local_res10);
    } while (cVar1 != '\0');
    param_3 = local_res18;
  }
  FUN_140e63970(local_98,&local_res8,&local_res10);
  if (local_88 != 0) {
    FUN_140e4cd60();
    local_88 = 0;
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  _eh_vector_destructor_iterator_(local_1b8,0x10,4,FUN_140041b30);
  if (0 < (int)local_a8[0]) {
    puVar4 = local_a0;
    do {
      puVar7 = (undefined8 *)*puVar4;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 5;
      puVar4 = puVar4 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_a0);
  DAT_141dc7a50 = (undefined8 *)local_218;
  return param_3;
}

