// gml_Script____struct___268_world_pos_to_gui_world_pos_to_gui @ 0x140648a10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___268_world_pos_to_gui_world_pos_to_gui
          (double param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  double *pdVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  byte local_res8;
  code *pcVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  ulonglong in_stack_fffffffffffffd30;
  ulonglong uVar17;
  undefined8 **ppuVar18;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  uint uStack_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 uStack_270;
  uint uStack_26c;
  undefined8 local_268;
  undefined4 uStack_260;
  uint uStack_25c;
  double local_258;
  uint local_24c;
  double local_248;
  uint local_23c;
  undefined8 local_238;
  char *local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_204;
  undefined8 local_1f8;
  byte local_1ec;
  undefined8 local_1e8;
  byte local_1dc;
  double local_1d8;
  byte local_1cc;
  undefined8 local_1c8;
  byte local_1bc;
  undefined8 local_1b8 [2];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined8 local_188 [2];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  double local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 *local_128;
  undefined8 *local_120;
  double *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined8 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  double local_b8;
  undefined4 local_ac;
  double local_a8;
  undefined4 local_9c;
  uint local_98 [2];
  undefined8 *local_90;
  
  local_230 = "gml_Script_spawn_settle";
  local_238 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_238;
  local_228 = 0x21;
  FUN_140041df0(local_98,param_4,3,param_5);
  pcVar14 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_1f8,0x10,10,FUN_1400424d0,FUN_140041b30);
  uStack_25c = 0xffffff;
  local_268 = 0.0;
  uStack_26c = 0xffffff;
  local_278 = 0.0;
  local_res8 = 0xff;
  uStack_13c = 0xffffff;
  local_148 = 0.0;
  local_23c = 0xffffff;
  local_248 = 0.0;
  local_24c = 0xffffff;
  local_258 = 0.0;
  local_204 = 0xffffff;
  local_210 = 0;
  local_214 = 0xffffff;
  local_220 = 0;
  local_28c = 0;
  local_298 = 0;
  local_27c = 0;
  local_288 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_228 = 0x21;
  puVar8 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_98[0];
  if ((int)local_98[0] < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_90[2];
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_228 = 0x21;
    uStack_2bc = 0xf;
    local_2c8 = 7.29112201955693e-304;
    if ((int)local_98[0] < 3) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_90[2];
      if (&local_2c8 == puVar6) goto LAB_140648bf0;
    }
    local_138 = 7.29112201955693e-304;
    uStack_130 = uStack_2c0;
    uStack_12c = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_138);
  }
LAB_140648bf0:
  local_228 = 0x22;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  uStack_2ac = 6;
  in_stack_fffffffffffffd30 = in_stack_fffffffffffffd30 & 0xffffffffffffff00;
  uVar15 = (ulonglong)pcVar14 & 0xffffffffffffff00;
  local_2b8 = param_1;
  FUN_140e87440(&local_2b8,DAT_1419fe0e8,0x80000000,&local_268,uVar15,in_stack_fffffffffffffd30);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  uStack_2ac = 6;
  uVar15 = uVar15 & 0xffffffffffffff00;
  local_2b8 = param_1;
  FUN_140e87440(&local_2b8,DAT_1419fe158,0x80000000,&local_278,uVar15,
                in_stack_fffffffffffffd30 & 0xffffffffffffff00);
  uVar16 = (undefined4)(uVar15 >> 0x20);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_2c8 = local_268;
  uStack_2c0 = uStack_260;
  uStack_2bc = uStack_25c;
  if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_2c8);
  local_2c8 = local_278;
  uStack_2c0 = uStack_270;
  uStack_2bc = uStack_26c;
  local_128 = &local_1f8;
  if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_2c8);
  local_120 = &local_1e8;
  if ((int)local_98[0] < 3) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_140648d53:
    local_2c8 = *pdVar5;
    uStack_2c0 = *(undefined4 *)(pdVar5 + 1);
    uStack_2bc = *(uint *)((longlong)pdVar5 + 0xc);
    if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_2c8);
  }
  else {
    pdVar5 = (double *)local_90[2];
    if (pdVar5 != &local_1d8) goto LAB_140648d53;
  }
  local_118 = &local_1d8;
  ppuVar18 = &local_128;
  uVar15 = CONCAT44(uVar16,DAT_141a12628);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_298,3,uVar15,ppuVar18);
  cVar2 = FUN_140e491e0(uVar4);
  if (cVar2 == '\0') {
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    uStack_2ac = 6;
    uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
    uVar15 = uVar15 & 0xffffffffffffff00;
    local_2b8 = param_1;
    FUN_140e87440(&local_2b8,DAT_1419fe0e8,0x80000000,&local_268,uVar15,uVar17);
    if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    uStack_2ac = 6;
    uVar15 = uVar15 & 0xffffffffffffff00;
    local_2b8 = param_1;
    FUN_140e87440(&local_2b8,DAT_1419fe158,0x80000000,&local_278,uVar15,uVar17 & 0xffffffffffffff00)
    ;
    uVar16 = (undefined4)(uVar15 >> 0x20);
    if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    if ((int)local_98[0] < 1) {
      puVar6 = &DAT_1419df7b0;
LAB_140648eaa:
      local_2c8 = (double)*puVar6;
      uStack_2c0 = *(undefined4 *)(puVar6 + 1);
      uStack_2bc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_2c8);
    }
    else {
      puVar6 = (undefined8 *)*local_90;
      if (puVar6 != &local_1c8) goto LAB_140648eaa;
    }
    local_110 = &local_1c8;
    if ((int)local_98[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_140648efc:
      local_2c8 = (double)*puVar6;
      uStack_2c0 = *(undefined4 *)(puVar6 + 1);
      uStack_2bc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_2c8);
    }
    else {
      puVar6 = (undefined8 *)local_90[1];
      if (puVar6 != local_1b8) goto LAB_140648efc;
    }
    local_108 = local_1b8;
    local_2c8 = local_268;
    uStack_2c0 = uStack_260;
    uStack_2bc = uStack_25c;
    if ((1 << (local_1a8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_2c8);
    local_100 = local_1a8;
    local_2c8 = local_278;
    uStack_2c0 = uStack_270;
    uStack_2bc = uStack_26c;
    if ((1 << (local_198[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_2c8);
    local_f8 = local_198;
    if ((int)local_98[0] < 3) {
      puVar6 = &DAT_1419df7b0;
LAB_140648fc8:
      local_2c8 = (double)*puVar6;
      uStack_2c0 = *(undefined4 *)(puVar6 + 1);
      uStack_2bc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_188[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_2c8);
    }
    else {
      puVar6 = (undefined8 *)local_90[2];
      if (puVar6 != local_188) goto LAB_140648fc8;
    }
    local_f0 = local_188;
    local_2c8 = (double)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
    uStack_2c0 = uRam00000001419df7c8;
    uStack_2bc = uRam00000001419df7cc;
    if ((1 << (local_178[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_2c8);
    local_e8 = local_178;
    local_2c8 = (double)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
    uStack_2c0 = uRam00000001419df7c8;
    uStack_2bc = uRam00000001419df7cc;
    if ((1 << (local_168[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_2c8);
    local_e0 = local_168;
    ppuVar18 = &local_110;
    uVar15 = CONCAT44(uVar16,DAT_1419f60a8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_288,7,uVar15,ppuVar18);
    cVar2 = FUN_140e491e0(uVar4);
    if (cVar2 == '\0') {
      local_228 = 0x22;
      local_res8 = 0xff;
      goto LAB_14064a05c;
    }
  }
  local_228 = 0x24;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  uStack_2ac = 6;
  uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  local_2b8 = param_1;
  FUN_140e87440(&local_2b8,DAT_1419fe0e8,0x80000000,&local_268,uVar15,uVar17);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  uStack_2ac = 6;
  uVar15 = uVar15 & 0xffffffffffffff00;
  local_2b8 = param_1;
  FUN_140e87440(&local_2b8,DAT_1419fe158,0x80000000,&local_278,uVar15,uVar17 & 0xffffffffffffff00);
  uVar16 = (undefined4)(uVar15 >> 0x20);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((int)local_98[0] < 1) {
    puVar6 = &DAT_1419df7b0;
LAB_1406491c7:
    local_2c8 = (double)*puVar6;
    uStack_2c0 = *(undefined4 *)(puVar6 + 1);
    uStack_2bc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_2c8);
  }
  else {
    puVar6 = (undefined8 *)*local_90;
    if (puVar6 != &local_1f8) goto LAB_1406491c7;
  }
  if ((int)local_98[0] < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_140649219:
    local_2c8 = (double)*puVar6;
    uStack_2c0 = *(undefined4 *)(puVar6 + 1);
    uStack_2bc = *(undefined4 *)((longlong)puVar6 + 0xc);
    local_128 = &local_1f8;
    if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_2c8);
  }
  else {
    puVar6 = (undefined8 *)local_90[1];
    local_128 = &local_1f8;
    if (puVar6 != &local_1e8) goto LAB_140649219;
  }
  local_120 = &local_1e8;
  local_2c8 = local_268;
  uStack_2c0 = uStack_260;
  uStack_2bc = uStack_25c;
  if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140041b80(&local_1d8,&local_2c8);
  local_118 = &local_1d8;
  local_2c8 = local_278;
  uStack_2c0 = uStack_270;
  uStack_2bc = uStack_26c;
  if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_2c8);
  local_110 = &local_1c8;
  ppuVar18 = &local_128;
  uVar15 = CONCAT44(uVar16,DAT_1419fd548);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_298,4,uVar15,ppuVar18);
  if (pdVar5 != &local_148) {
    local_2c8 = *pdVar5;
    uStack_2c0 = *(undefined4 *)(pdVar5 + 1);
    uStack_2bc = *(uint *)((longlong)pdVar5 + 0xc);
    FUN_140041b80(&local_148,&local_2c8);
    local_res8 = (byte)uStack_13c;
  }
  local_228 = 0x25;
  uStack_2ac = 6;
  uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  local_2b8 = param_1;
  FUN_140e87440(&local_2b8,DAT_1419fe0e8,0x80000000,&local_268,uVar15,uVar17);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  uStack_2ac = 6;
  ppuVar18 = (undefined8 **)(uVar17 & 0xffffffffffffff00);
  uVar15 = uVar15 & 0xffffffffffffff00;
  local_2b8 = param_1;
  FUN_140e87440(&local_2b8,DAT_1419fe158,0x80000000,&local_278,uVar15,ppuVar18);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  dVar12 = local_278;
  if ((uStack_26c & 0xffffff) != 0) {
    dVar12 = (double)FUN_140e4b060(&local_278);
  }
  dVar13 = local_268;
  if ((uStack_25c & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_268);
  }
  if ((int)local_98[0] < 2) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)local_90[1];
  }
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar10 = *pdVar5;
  }
  else {
    dVar10 = (double)FUN_140e4b060();
  }
  if ((int)local_98[0] < 1) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)*local_90;
  }
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar11 = *pdVar5;
  }
  else {
    dVar11 = (double)FUN_140e4b060();
  }
  fVar9 = (float)FUN_140e793d0((float)dVar11,(float)dVar10,(float)dVar13,(float)dVar12);
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_23c = 0;
  local_248 = (double)fVar9;
  local_228 = 0x27;
  local_2c8 = local_148;
  uStack_2c0 = uStack_140;
  uStack_2bc = uStack_13c;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  FUN_140041b80(&local_258,&local_2c8);
  bVar1 = true;
  do {
    do {
      if (!bVar1) {
        local_228 = 0x27;
        local_cc = 0;
        local_d8 = 0x3ff0000000000000;
        FUN_1400462a0(&local_258,&local_d8);
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
      }
      bVar1 = false;
      local_bc = 0;
      local_c8 = 0;
      iVar3 = FUN_140e851f0(&local_258,&local_c8,DAT_141955260,1);
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if (iVar3 < 1) {
        local_228 = 0x2f;
        if ((int)local_98[0] < 1) {
          puVar6 = &DAT_1419df7b0;
LAB_140649d1e:
          local_2a8 = *(undefined4 *)puVar6;
          uStack_2a4 = *(undefined4 *)((longlong)puVar6 + 4);
          uStack_2a0 = *(undefined4 *)(puVar6 + 1);
          uStack_29c = *(uint *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_210);
          }
          FUN_140041b80(&local_210,&local_2a8);
        }
        else {
          puVar6 = (undefined8 *)*local_90;
          if (puVar6 != &local_210) goto LAB_140649d1e;
        }
        FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_210);
        local_228 = 0x30;
        if ((int)local_98[0] < 2) {
          puVar6 = &DAT_1419df7b0;
LAB_140649d84:
          local_2a8 = *(undefined4 *)puVar6;
          uStack_2a4 = *(undefined4 *)((longlong)puVar6 + 4);
          uStack_2a0 = *(undefined4 *)(puVar6 + 1);
          uStack_29c = *(uint *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_220);
          }
          FUN_140041b80(&local_220,&local_2a8);
        }
        else {
          puVar6 = (undefined8 *)local_90[1];
          if (puVar6 != &local_220) goto LAB_140649d84;
        }
        FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_220);
        local_228 = 0x32;
        if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        local_298 = 0;
        local_290 = 0;
        local_28c = 5;
        uStack_2bc = 6;
        uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        local_2c8 = param_1;
        FUN_140e87440(&local_2c8,DAT_1419fe0e8,0x80000000,&local_268,uVar15,uVar17);
        if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        uStack_2bc = 6;
        uVar15 = uVar15 & 0xffffffffffffff00;
        local_2c8 = param_1;
        FUN_140e87440(&local_2c8,DAT_1419fe158,0x80000000,&local_278,uVar15,
                      uVar17 & 0xffffffffffffff00);
        uVar16 = (undefined4)(uVar15 >> 0x20);
        if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        local_2a8 = (undefined4)local_268;
        uStack_2a4 = local_268._4_4_;
        uStack_2a0 = uStack_260;
        uStack_29c = uStack_25c;
        if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_2a8);
        local_2a8 = (undefined4)local_278;
        uStack_2a4 = local_278._4_4_;
        uStack_2a0 = uStack_270;
        uStack_29c = uStack_26c;
        local_128 = &local_1f8;
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_2a8);
        local_120 = &local_1e8;
        if ((int)local_98[0] < 3) {
          pdVar5 = (double *)&DAT_1419df7b0;
LAB_140649f33:
          local_2a8 = *(undefined4 *)pdVar5;
          uStack_2a4 = *(undefined4 *)((longlong)pdVar5 + 4);
          uStack_2a0 = *(undefined4 *)(pdVar5 + 1);
          uStack_29c = *(uint *)((longlong)pdVar5 + 0xc);
          if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          FUN_140041b80(&local_1d8,&local_2a8);
        }
        else {
          pdVar5 = (double *)local_90[2];
          if (pdVar5 != &local_1d8) goto LAB_140649f33;
        }
        local_118 = &local_1d8;
        uVar4 = FUN_140e634e0(param_1,param_2,&local_298,3,CONCAT44(uVar16,DAT_141a12628),&local_128
                             );
        cVar2 = FUN_140e491e0(uVar4);
        if (cVar2 != '\0') {
          local_228 = 0x33;
          if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          local_288 = 0;
          local_280 = 0;
          local_27c = 5;
          if (((int)local_98[0] < 3) || (puVar8 = (undefined8 *)local_90[2], puVar8 != &local_1c8))
          {
            local_2a8 = *(undefined4 *)puVar8;
            uStack_2a4 = *(undefined4 *)((longlong)puVar8 + 4);
            uStack_2a0 = *(undefined4 *)(puVar8 + 1);
            uStack_29c = *(uint *)((longlong)puVar8 + 0xc);
            if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c8);
            }
            FUN_140041b80(&local_1c8,&local_2a8);
          }
          local_110 = &local_1c8;
          gml_GlobalScript_world_pos_to_gui(param_1,param_2,&local_288,1,&local_110);
        }
        goto LAB_14064a05c;
      }
      local_228 = 0x29;
      dVar12 = local_248;
      if ((local_23c & 0xffffff) != 0) {
        dVar12 = (double)FUN_140e4b060(&local_248);
      }
      dVar13 = local_258;
      if ((local_24c & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_258);
      }
      if ((int)local_98[0] < 1) {
        puVar6 = &DAT_1419df7b0;
      }
      else {
        puVar6 = (undefined8 *)*local_90;
      }
      fVar9 = (float)FUN_140e78f90((float)dVar13,(float)dVar12);
      uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
      uStack_150 = *(undefined4 *)(puVar6 + 1);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
        local_158 = *puVar6;
      }
      else {
        FUN_1400419b0(&local_158,puVar6);
      }
      FUN_140162c50(&local_158,(double)fVar9);
      local_2a8 = (undefined4)local_158;
      uStack_2a4 = local_158._4_4_;
      uStack_2a0 = uStack_150;
      uStack_29c = uStack_14c;
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_210);
      }
      FUN_140041b80(&local_210,&local_2a8);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_210);
      local_228 = 0x2a;
      dVar12 = local_248;
      if ((local_23c & 0xffffff) != 0) {
        dVar12 = (double)FUN_140e4b060(&local_248);
      }
      dVar13 = local_258;
      if ((local_24c & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_258);
      }
      if ((int)local_98[0] < 2) {
        pdVar5 = (double *)&DAT_1419df7b0;
      }
      else {
        pdVar5 = (double *)local_90[1];
      }
      fVar9 = (float)FUN_140e79010((float)dVar13,(float)dVar12);
      uStack_2ac = *(undefined4 *)((longlong)pdVar5 + 0xc);
      uStack_2b0 = *(undefined4 *)(pdVar5 + 1);
      if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) == 0) {
        local_2b8 = *pdVar5;
      }
      else {
        FUN_1400419b0(&local_2b8,pdVar5);
      }
      FUN_140162c50(&local_2b8,(double)fVar9);
      local_2a8 = (undefined4)local_2b8;
      uStack_2a4 = local_2b8._4_4_;
      uStack_2a0 = uStack_2b0;
      uStack_29c = uStack_2ac;
      if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_220);
      }
      FUN_140041b80(&local_220,&local_2a8);
      if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_220);
      local_228 = 0x2c;
      if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      local_298 = 0;
      local_290 = 0;
      local_28c = 5;
      local_ac = 6;
      uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      local_b8 = param_1;
      FUN_140e87440(&local_b8,DAT_1419fe0e8,0x80000000,&local_268,uVar15,uVar17);
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      local_9c = 6;
      uVar15 = uVar15 & 0xffffffffffffff00;
      local_a8 = param_1;
      FUN_140e87440(&local_a8,DAT_1419fe158,0x80000000,&local_278,uVar15,uVar17 & 0xffffffffffffff00
                   );
      uVar16 = (undefined4)(uVar15 >> 0x20);
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      local_2a8 = (undefined4)local_268;
      uStack_2a4 = local_268._4_4_;
      uStack_2a0 = uStack_260;
      uStack_29c = uStack_25c;
      if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_2a8);
      local_2a8 = (undefined4)local_278;
      uStack_2a4 = local_278._4_4_;
      uStack_2a0 = uStack_270;
      uStack_29c = uStack_26c;
      local_128 = &local_1f8;
      if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_2a8);
      local_120 = &local_1e8;
      if ((int)local_98[0] < 3) {
        pdVar5 = (double *)&DAT_1419df7b0;
LAB_140649960:
        local_2a8 = *(undefined4 *)pdVar5;
        uStack_2a4 = *(undefined4 *)((longlong)pdVar5 + 4);
        uStack_2a0 = *(undefined4 *)(pdVar5 + 1);
        uStack_29c = *(uint *)((longlong)pdVar5 + 0xc);
        if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_2a8);
      }
      else {
        pdVar5 = (double *)local_90[2];
        if (pdVar5 != &local_1d8) goto LAB_140649960;
      }
      local_118 = &local_1d8;
      ppuVar18 = &local_128;
      uVar15 = CONCAT44(uVar16,DAT_141a12628);
      uVar4 = FUN_140e634e0(param_1,param_2,&local_298,3,uVar15,ppuVar18);
      cVar2 = FUN_140e491e0(uVar4);
    } while (cVar2 != '\0');
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    uStack_12c = 6;
    uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
    uVar15 = uVar15 & 0xffffffffffffff00;
    local_138 = param_1;
    FUN_140e87440(&local_138,DAT_1419fe0e8,0x80000000,&local_268,uVar15,uVar17);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    uStack_2bc = 6;
    uVar15 = uVar15 & 0xffffffffffffff00;
    local_2c8 = param_1;
    FUN_140e87440(&local_2c8,DAT_1419fe158,0x80000000,&local_278,uVar15,uVar17 & 0xffffffffffffff00)
    ;
    uVar16 = (undefined4)(uVar15 >> 0x20);
    if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    if ((int)local_98[0] < 1) {
      puVar6 = &DAT_1419df7b0;
LAB_140649ac8:
      local_2a8 = *(undefined4 *)puVar6;
      uStack_2a4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_2a0 = *(undefined4 *)(puVar6 + 1);
      uStack_29c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_2a8);
    }
    else {
      puVar6 = (undefined8 *)*local_90;
      if (puVar6 != &local_1c8) goto LAB_140649ac8;
    }
    local_110 = &local_1c8;
    if ((int)local_98[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_140649b1a:
      local_2a8 = *(undefined4 *)puVar6;
      uStack_2a4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_2a0 = *(undefined4 *)(puVar6 + 1);
      uStack_29c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_2a8);
    }
    else {
      puVar6 = (undefined8 *)local_90[1];
      if (puVar6 != local_1b8) goto LAB_140649b1a;
    }
    local_108 = local_1b8;
    local_2a8 = (undefined4)local_268;
    uStack_2a4 = local_268._4_4_;
    uStack_2a0 = uStack_260;
    uStack_29c = uStack_25c;
    if ((1 << (local_1a8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_2a8);
    local_100 = local_1a8;
    local_2a8 = (undefined4)local_278;
    uStack_2a4 = local_278._4_4_;
    uStack_2a0 = uStack_270;
    uStack_29c = uStack_26c;
    if ((1 << (local_198[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_2a8);
    local_f8 = local_198;
    if ((int)local_98[0] < 3) {
      puVar6 = &DAT_1419df7b0;
LAB_140649be6:
      local_2a8 = *(undefined4 *)puVar6;
      uStack_2a4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_2a0 = *(undefined4 *)(puVar6 + 1);
      uStack_29c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_188[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_2a8);
    }
    else {
      puVar6 = (undefined8 *)local_90[2];
      if (puVar6 != local_188) goto LAB_140649be6;
    }
    local_f0 = local_188;
    local_2a8 = _DAT_1419df7c0;
    uStack_2a4 = uRam00000001419df7c4;
    uStack_2a0 = uRam00000001419df7c8;
    uStack_29c = uRam00000001419df7cc;
    if ((1 << (local_178[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_2a8);
    local_e8 = local_178;
    local_2a8 = _DAT_1419df7c0;
    uStack_2a4 = uRam00000001419df7c4;
    uStack_2a0 = uRam00000001419df7c8;
    uStack_29c = uRam00000001419df7cc;
    if ((1 << (local_168[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_2a8);
    local_e0 = local_168;
    ppuVar18 = &local_110;
    uVar15 = CONCAT44(uVar16,DAT_1419f60a8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_288,7,uVar15,ppuVar18);
    cVar2 = FUN_140e491e0(uVar4);
  } while (cVar2 != '\0');
  local_228 = 0x2c;
LAB_14064a05c:
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << (local_res8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  _eh_vector_destructor_iterator_(&local_1f8,0x10,10,FUN_140041b30);
  if (0 < (int)local_98[0]) {
    puVar8 = local_90;
    do {
      puVar6 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_90);
  DAT_141dc7a50 = (undefined8 *)local_238;
  return param_3;
}

