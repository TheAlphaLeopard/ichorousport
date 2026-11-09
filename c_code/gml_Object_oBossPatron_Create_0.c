// gml_Object_oBossPatron_Create_0 @ 0x1407a4cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oBossPatron_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint local_res20;
  undefined4 **ppuVar15;
  undefined8 **ppuVar16;
  ulonglong uVar17;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  double local_288;
  uint local_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  char *local_260;
  undefined4 local_258;
  undefined8 local_250;
  undefined4 local_244;
  undefined8 local_240;
  undefined4 local_234;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 local_224;
  longlong local_220;
  uint uStack_214;
  undefined8 local_210;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f4;
  undefined4 local_1e8 [4];
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined4 local_1c8 [4];
  undefined4 local_1b8 [4];
  longlong local_1a8 [2];
  longlong local_198 [2];
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined4 local_158 [4];
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined4 *local_118;
  undefined8 *local_110;
  undefined4 *local_108;
  undefined4 *local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined4 *local_d0;
  
  local_260 = "gml_Script_anon@198@gml_Object_oBossKillText_Create_0";
  local_268 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_268;
  local_258 = 9;
  _eh_vector_constructor_iterator_(local_1e8,0x10,10,FUN_1400424d0,FUN_140041b30);
  local_27c = 0xffffff;
  local_288 = 0.0;
  local_res20 = 0xffffff;
  uStack_214 = 0xffffff;
  lVar12 = 0;
  local_220 = 0;
  puVar4 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a08be8);
  local_244 = 0xffffff;
  local_250 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_234 = 0xffffff;
  local_240 = 0;
  local_1f4 = 0xffffff;
  local_200 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  local_11c = 0;
  uVar13 = 0;
  uVar14 = 0;
  local_128 = 0;
  local_2ac = 0;
  local_2b8 = 0;
  local_26c = 0;
  local_278 = 0;
  local_224 = 0;
  local_230 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de1a88) &&
     (_Init_thread_header(&DAT_141de1a88), DAT_141de1a88 == -1)) {
    DAT_141de1a78 = FUN_140e63aa0(DAT_141a08ba8);
    _Init_thread_footer(&DAT_141de1a88);
  }
  FUN_140e643a0(param_1,DAT_141de1a78);
  local_258 = 0xb;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08b88);
  FUN_140e609c0(param_1);
  puVar11 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*param_5;
  }
  if (puVar6 != puVar5) {
    local_298 = *(undefined4 *)puVar6;
    uStack_294 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_290 = *(undefined4 *)(puVar6 + 1);
    uStack_28c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_298);
  }
  FUN_140e60910(1);
  local_258 = 0xc;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01aa8);
  FUN_140e609c0(param_1);
  if (1 < param_4) {
    puVar11 = (undefined8 *)param_5[1];
  }
  if (puVar11 != puVar5) {
    local_298 = *(undefined4 *)puVar11;
    uStack_294 = *(undefined4 *)((longlong)puVar11 + 4);
    uStack_290 = *(undefined4 *)(puVar11 + 1);
    uStack_28c = *(undefined4 *)((longlong)puVar11 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_298);
  }
  FUN_140e60910(1);
  local_258 = 0xe;
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08b68);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar11);
  }
  *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
  *puVar11 = 0x4040000000000000;
  local_258 = 0x10;
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08bb8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar11);
  }
  *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
  *puVar11 = 0x4070400000000000;
  local_258 = 0x11;
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08c18);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar11);
  }
  *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
  *puVar11 = 0x4050000000000000;
  local_258 = 0x13;
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08b58);
  uVar9 = FUN_140e794b0(0,0x405e000000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar11);
  }
  *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
  *puVar11 = uVar9;
  local_258 = 0x15;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08bd8);
  FUN_140e609c0(param_1);
  puVar8 = (undefined4 *)FUN_140e8da20(&local_128,param_1,0);
  if (puVar8 != puVar7) {
    local_298 = *puVar8;
    uStack_294 = puVar8[1];
    uStack_290 = puVar8[2];
    uStack_28c = puVar8[3];
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_298);
  }
  FUN_140e60910(1);
  local_258 = 0x17;
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08bf8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_2a8,gml_Script_anon_1193_anon_198_gml_Object_oBossKillText_Create_0,param_1);
  if (&local_2a8 != puVar11) {
    local_298 = (undefined4)local_2a8;
    uStack_294 = local_2a8._4_4_;
    uStack_290 = uStack_2a0;
    uStack_28c = uStack_29c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    FUN_140041b80(puVar11,&local_298);
  }
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  FUN_140e60910(1);
  local_258 = 0x1d;
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08b48);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_2a8,gml_Script_anon_1673_anon_198_gml_Object_oBossKillText_Create_0,param_1);
  if (&local_2a8 != puVar11) {
    local_298 = (undefined4)local_2a8;
    uStack_294 = local_2a8._4_4_;
    uStack_290 = uStack_2a0;
    uStack_28c = uStack_29c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    FUN_140041b80(puVar11,&local_298);
  }
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  FUN_140e60910(1);
  local_258 = 0x36;
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08c28);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_2a8,gml_Script____struct___362_anon_198_gml_Object_oBossKillText_Create_0,
                param_1);
  if (&local_2a8 != puVar11) {
    local_298 = (undefined4)local_2a8;
    uStack_294 = local_2a8._4_4_;
    uStack_290 = uStack_2a0;
    uStack_28c = uStack_29c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    FUN_140041b80(puVar11,&local_298);
  }
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  FUN_140e60910(1);
  local_258 = 0x49;
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08bc8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_2a8,gml_Script_anon_2793_anon_198_gml_Object_oBossKillText_Create_0,param_1);
  if (&local_2a8 != puVar11) {
    local_298 = (undefined4)local_2a8;
    uStack_294 = local_2a8._4_4_;
    uStack_290 = uStack_2a0;
    uStack_28c = uStack_29c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    FUN_140041b80(puVar11,&local_298);
  }
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  FUN_140e60910(1);
  local_258 = 0x5d;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_27c = 0;
  local_288 = 0.0;
  bVar1 = true;
  do {
    if (!bVar1) {
      local_258 = 0x5d;
      uVar2 = local_27c & 0xffffff;
      if (uVar2 == 0) {
LAB_1407a53ef:
        local_288 = (double)CONCAT44(uVar14,uVar13) + 1.0;
      }
      else if (uVar2 == 1) {
        local_288 = (double)FUN_140e4b060(&local_288);
        local_288 = local_288 + 1.0;
        local_27c = 0;
      }
      else if (uVar2 == 7) {
        local_288 = (double)CONCAT44(local_288._4_4_,local_288._0_4_ + 1);
      }
      else if (uVar2 == 10) {
        local_288 = (double)((longlong)local_288 + 1);
      }
      else {
        if (uVar2 == 0xd) {
          local_27c = 0;
          goto LAB_1407a53ef;
        }
        FUN_140042910(&DAT_14172c3d8,&local_288,&local_288);
      }
    }
    bVar1 = false;
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a01aa8);
    iVar3 = FUN_140e851f0(&local_288,uVar9,DAT_141955260,1);
    if ((iVar3 == -2) || (-1 < iVar3)) {
      local_258 = 0x73;
      puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff478);
      FUN_140e609c0(param_1);
      FUN_140e645a0(&local_298,gml_Object_oBossKillText_Draw_0,param_1);
      if (&local_298 != puVar4) {
        local_2c8 = local_298;
        uStack_2c4 = uStack_294;
        uStack_2c0 = uStack_290;
        uStack_2bc = uStack_28c;
        if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_2c8);
      }
      if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      FUN_140e60910(1);
      if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_230);
      }
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_210);
      }
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_200);
      }
      if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_240);
      }
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_250);
      }
      if ((1 << ((byte)local_res20 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_220);
      }
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      _eh_vector_destructor_iterator_(local_1e8,0x10,10,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_268;
      return param_3;
    }
    local_258 = 0x5f;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2b8 = 0;
    local_2b0 = 0;
    local_2ac = 5;
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a08c28);
    uVar17 = 0;
    plVar10 = (longlong *)FUN_140e63610(param_1,param_2,&local_2b8,0,uVar9,0);
    if (plVar10 != &local_220) {
      local_2c8 = (undefined4)*plVar10;
      uStack_2c4 = *(undefined4 *)((longlong)plVar10 + 4);
      uStack_2c0 = (undefined4)plVar10[1];
      uStack_2bc = *(undefined4 *)((longlong)plVar10 + 0xc);
      if ((1 << ((byte)local_res20 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_220);
      }
      FUN_140041b80(&local_220,&local_2c8);
      lVar12 = local_220;
      local_res20 = uStack_214;
    }
    local_258 = 0x61;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2b8 = 0;
    local_2b0 = 0;
    local_2ac = 5;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_230);
    }
    local_230 = 0;
    local_228 = 0;
    local_224 = 5;
    local_2c8 = (undefined4)DAT_1419df7b0;
    uStack_2c4 = DAT_1419df7b0._4_4_;
    uStack_2c0 = DAT_1419df7b8;
    uStack_2bc = DAT_1419df7bc;
    if ((1 << ((byte)local_1e8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_2c8);
    local_118 = local_1e8;
    ppuVar15 = &local_118;
    puVar11 = (undefined8 *)
              gml_Script_scribble_typists_add_event(param_1,param_2,&local_278,1,ppuVar15);
    if (puVar11 != &local_250) {
      local_2c8 = *(undefined4 *)puVar11;
      uStack_2c4 = *(undefined4 *)((longlong)puVar11 + 4);
      uStack_2c0 = *(undefined4 *)(puVar11 + 1);
      uStack_2bc = *(undefined4 *)((longlong)puVar11 + 0xc);
      if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_250);
      }
      FUN_140041b80(&local_250,&local_2c8);
    }
    FUN_140e87440(&local_250,DAT_141a07848,0x80000000,&local_138,
                  (ulonglong)ppuVar15 & 0xffffffffffffff00,uVar17 & 0xffffffffffffff00);
    uVar9 = FUN_140e794b0(0x33333333,0x3ffccccccccccccd);
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1cc = 0;
    local_110 = &local_1d8;
    local_2c8 = _DAT_141dc69b0;
    uStack_2c4 = uRam0000000141dc69b4;
    uStack_2c0 = uRam0000000141dc69b8;
    uStack_2bc = uRam0000000141dc69bc;
    local_1d8 = uVar9;
    if ((1 << ((byte)local_1c8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_2c8);
    local_108 = local_1c8;
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_298,gml_Script_anon_198_gml_Object_oBossKillText_Create_0,0);
    if (&local_298 != puVar4) {
      local_2c8 = local_298;
      uStack_2c4 = uStack_294;
      uStack_2c0 = uStack_290;
      uStack_2bc = uStack_28c;
      if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_2c8);
    }
    FUN_140e60910(1);
    if (puVar4 != local_1b8) {
      local_2c8 = *puVar4;
      uStack_2c4 = puVar4[1];
      uStack_2c0 = puVar4[2];
      uStack_2bc = puVar4[3];
      if ((1 << ((byte)local_1b8[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_2c8);
    }
    if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_100 = local_1b8;
    plVar10 = (longlong *)0x0;
    if (((local_res20 & 0xffffff) == 2) && (lVar12 != 0)) {
      if (*(int *)(lVar12 + 0x24) < 1) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      }
      else {
        plVar10 = *(longlong **)(lVar12 + 8);
      }
      if (plVar10 != local_1a8) goto LAB_1407a57b9;
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar10 = &local_220;
LAB_1407a57b9:
      local_2c8 = (undefined4)*plVar10;
      uStack_2c4 = *(undefined4 *)((longlong)plVar10 + 4);
      uStack_2c0 = (undefined4)plVar10[1];
      uStack_2bc = *(undefined4 *)((longlong)plVar10 + 0xc);
      if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_2c8);
    }
    local_f8 = local_1a8;
    plVar10 = (longlong *)0x0;
    if (((local_res20 & 0xffffff) == 2) && (lVar12 != 0)) {
      if (*(int *)(lVar12 + 0x24) < 2) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      }
      else {
        plVar10 = (longlong *)(*(longlong *)(lVar12 + 8) + 0x10);
      }
      if (plVar10 != local_198) goto LAB_1407a583a;
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar10 = &local_220;
LAB_1407a583a:
      local_2c8 = (undefined4)*plVar10;
      uStack_2c4 = *(undefined4 *)((longlong)plVar10 + 4);
      uStack_2c0 = (undefined4)plVar10[1];
      uStack_2bc = *(undefined4 *)((longlong)plVar10 + 0xc);
      if ((1 << ((byte)local_198[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_2c8);
    }
    local_f0 = local_198;
    uVar9 = FUN_140e794b0(0x9999999a,0x3ff4cccccccccccd);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_17c = 0;
    local_e8 = &local_188;
    local_188 = uVar9;
    uVar9 = FUN_140e794b0(0,0x4020000000000000);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_16c = 0;
    local_e0 = &local_178;
    local_178 = uVar9;
    uVar9 = FUN_140e78f40(0xffffffffffffffec);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_15c = 0;
    local_d8 = &local_168;
    local_168 = uVar9;
    switch(local_244) {
    default:
switchD_1407a595a_caseD_1:
      uVar9 = 0;
      break;
    case 6:
      uVar9 = local_250;
      break;
    case 0xf:
      iVar3 = (int)((ulonglong)local_250 >> 0x20);
      if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_1407a595a_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar13 = FUN_140e4a8b0(&local_250);
      uVar9 = FUN_140e87250(uVar13);
    }
    puVar11 = &local_138;
    puVar7 = (undefined4 *)FUN_140e63610(uVar9,param_2,&local_230,2,puVar11,&local_110);
    uVar13 = (undefined4)((ulonglong)puVar11 >> 0x20);
    if (puVar7 != local_158) {
      local_2c8 = *puVar7;
      uStack_2c4 = puVar7[1];
      uStack_2c0 = puVar7[2];
      uStack_2bc = puVar7[3];
      if ((1 << ((byte)local_158[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_2c8);
    }
    local_d0 = local_158;
    ppuVar15 = &local_100;
    puVar11 = (undefined8 *)
              FUN_140e634e0(param_1,param_2,&local_2b8,7,CONCAT44(uVar13,DAT_1419fd6d8),ppuVar15);
    if (puVar11 != &local_240) {
      local_2c8 = *(undefined4 *)puVar11;
      uStack_2c4 = *(undefined4 *)((longlong)puVar11 + 4);
      uStack_2c0 = *(undefined4 *)(puVar11 + 1);
      uStack_2bc = *(undefined4 *)((longlong)puVar11 + 0xc);
      if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_240);
      }
      FUN_140041b80(&local_240,&local_2c8);
    }
    local_258 = 0x6d;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2b8 = 0;
    local_2b0 = 0;
    local_2ac = 5;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    local_2c8 = _DAT_141dd6988;
    uStack_2c4 = uRam0000000141dd698c;
    uStack_2c0 = uRam0000000141dd6990;
    uStack_2bc = DAT_141dd6994;
    if ((1 << ((byte)local_1e8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_2c8);
    local_118 = local_1e8;
    uStack_29c = DAT_141dd6974;
    uStack_2a0 = DAT_141dd6970;
    if ((1 << ((byte)DAT_141dd6974 & 0x1f) & 0x46U) == 0) {
      local_2a8 = DAT_141dd6968;
    }
    else {
      FUN_1400419b0(&local_2a8,&DAT_141dd6968);
    }
    uVar13 = uStack_29c;
    local_2c8 = (undefined4)local_2a8;
    uStack_2c4 = local_2a8._4_4_;
    uStack_2c0 = uStack_2a0;
    uStack_2bc = uStack_29c;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_2c8);
    if ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_110 = &local_1d8;
    puVar7 = (undefined4 *)gml_Script____struct___117(param_1,param_2,&local_278,1,&local_118);
    if (puVar7 != local_1c8) {
      local_2c8 = *puVar7;
      uStack_2c4 = puVar7[1];
      uStack_2c0 = puVar7[2];
      uStack_2bc = puVar7[3];
      if ((1 << ((byte)local_1c8[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1c8);
      }
      FUN_140041b80(local_1c8,&local_2c8);
    }
    local_108 = local_1c8;
    ppuVar16 = &local_110;
    puVar11 = (undefined8 *)FUN_140e64420(param_1,param_2,&local_2b8,2,ppuVar16);
    if (puVar11 != &local_200) {
      local_2c8 = *(undefined4 *)puVar11;
      uStack_2c4 = *(undefined4 *)((longlong)puVar11 + 4);
      uStack_2c0 = *(undefined4 *)(puVar11 + 1);
      uStack_2bc = *(undefined4 *)((longlong)puVar11 + 0xc);
      if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_200);
      }
      FUN_140041b80(&local_200,&local_2c8);
    }
    FUN_140e87930(&local_240,DAT_141a578c0,0x80000000,&local_200);
    local_258 = 0x6e;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2b8 = 0;
    local_2b0 = 0;
    local_2ac = 5;
    FUN_140e87440(&local_240,DAT_141a578c0,0x80000000,&local_148,
                  (ulonglong)ppuVar16 & 0xffffffffffffff00,(ulonglong)ppuVar15 & 0xffffffffffffff00)
    ;
    local_2c8 = (undefined4)local_148;
    uStack_2c4 = local_148._4_4_;
    uStack_2c0 = uStack_140;
    uStack_2bc = uStack_13c;
    if ((1 << ((byte)local_1e8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_2c8);
    local_118 = local_1e8;
    local_2c8 = (undefined4)DAT_1419df7b0;
    uStack_2c4 = DAT_1419df7b0._4_4_;
    uStack_2c0 = DAT_1419df7b8;
    uStack_2bc = DAT_1419df7bc;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_2c8);
    local_110 = &local_1d8;
    ppuVar15 = &local_118;
    puVar11 = (undefined8 *)gml_Script_seg_add(param_1,param_2,&local_2b8,2,ppuVar15);
    uVar13 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
    if (puVar11 != &local_210) {
      local_2c8 = *(undefined4 *)puVar11;
      uStack_2c4 = *(undefined4 *)((longlong)puVar11 + 4);
      uStack_2c0 = *(undefined4 *)(puVar11 + 1);
      uStack_2bc = *(undefined4 *)((longlong)puVar11 + 0xc);
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_210);
      }
      FUN_140041b80(&local_210,&local_2c8);
    }
    FUN_140e87930(&local_240,DAT_141a46588,0x80000000,&local_210);
    local_258 = 0x70;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2b8 = 0;
    local_2b0 = 0;
    local_2ac = 5;
    puVar7 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a08bd8);
    if (puVar7 != local_1e8) {
      local_2c8 = *puVar7;
      uStack_2c4 = puVar7[1];
      uStack_2c0 = puVar7[2];
      uStack_2bc = puVar7[3];
      if ((1 << ((byte)local_1e8[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1e8);
      }
      FUN_140041b80(local_1e8,&local_2c8);
    }
    local_118 = local_1e8;
    local_110 = &local_240;
    FUN_140e634e0(param_1,param_2,&local_2b8,2,CONCAT44(uVar13,DAT_1419fe568),&local_118);
    uVar13 = SUB84(local_288,0);
    uVar14 = (undefined4)((ulonglong)local_288 >> 0x20);
  } while( true );
}

