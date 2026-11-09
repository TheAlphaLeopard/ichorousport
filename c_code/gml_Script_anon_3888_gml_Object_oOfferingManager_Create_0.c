// gml_Script_anon_3888_gml_Object_oOfferingManager_Create_0 @ 0x140b843b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_3888_gml_Object_oOfferingManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined4 uVar16;
  undefined8 **ppuVar15;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong local_188;
  uint local_17c;
  longlong *local_178;
  longlong *local_170;
  undefined8 *local_168;
  undefined1 *local_160;
  double local_158;
  uint local_14c;
  undefined8 local_148;
  byte local_13c;
  longlong local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  uint local_80 [2];
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 local_64;
  
  local_f0 = "gml_Script_anon@2455@gml_Object_oOfferingManager_Create_0";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 99;
  FUN_140041df0(local_80,param_4,2,param_5);
  _eh_vector_constructor_iterator_(&local_148,0x10,4,FUN_1400424d0,FUN_140041b30);
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef2d8);
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  puVar6 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef1a8);
  uVar12 = local_80[0];
  local_84 = 0xffffff;
  local_90 = 0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_64 = 0;
  local_70 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_94 = 0;
  local_a0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 99;
  puVar13 = &DAT_1419df7b0;
  if ((int)local_80[0] < 2) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_78[1];
  }
  iVar3 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_e8 = 99;
    if ((int)uVar12 < 2) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)local_78[1];
    }
    puVar7 = (undefined8 *)FUN_140e8da20(&local_70,param_1,0);
    if (puVar7 != puVar9) {
      local_108 = *puVar7;
      uStack_100 = *(undefined4 *)(puVar7 + 1);
      uStack_fc = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_108);
    }
  }
  local_e8 = 0x65;
  if ((int)uVar12 < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*local_78;
  }
  iVar3 = FUN_140e851f0(puVar9,puVar5,DAT_141955260,0);
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  local_b4 = 0xd;
  if (iVar3 == 0) {
    local_c0 = 0x3ff0000000000000;
  }
  else {
    local_c0 = 0;
  }
  local_e8 = 0x66;
  cVar2 = FUN_140e491e0(&local_c0);
  if (cVar2 == '\0') {
    uStack_d4 = DAT_141dd9ea4;
    uStack_d8 = DAT_141dd9ea0;
    if ((1 << ((byte)DAT_141dd9ea4 & 0x1f) & 0x46U) == 0) {
      local_e0 = DAT_141dd9e98;
    }
    else {
      FUN_1400419b0(&local_e0,&DAT_141dd9e98);
    }
    puVar9 = &local_e0;
    bVar1 = false;
    bVar14 = true;
  }
  else {
    uStack_fc = DAT_141dd9eb4;
    uStack_100 = DAT_141dd9eb0;
    if ((1 << ((byte)DAT_141dd9eb4 & 0x1f) & 0x46U) == 0) {
      local_108 = DAT_141dd9ea8;
    }
    else {
      FUN_1400419b0(&local_108,&DAT_141dd9ea8);
    }
    puVar9 = &local_108;
    bVar1 = true;
    bVar14 = false;
  }
  local_198 = *(undefined4 *)puVar9;
  uStack_194 = *(undefined4 *)((longlong)puVar9 + 4);
  uStack_190 = *(undefined4 *)(puVar9 + 1);
  uStack_18c = *(undefined4 *)((longlong)puVar9 + 0xc);
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  FUN_140041b80(&local_d0,&local_198);
  if ((bVar14) && ((1 << ((byte)uStack_d4 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_e0);
  }
  if ((bVar1) && ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_108);
  }
  local_e8 = 0x67;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  local_a0 = 0;
  local_98 = 0;
  local_94 = 5;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f48a8);
  local_178 = &local_c0;
  if ((int)local_80[0] < 2) {
    plVar10 = &DAT_1419df7b0;
LAB_140b84798:
    local_198 = (undefined4)*plVar10;
    uStack_194 = *(undefined4 *)((longlong)plVar10 + 4);
    uStack_190 = (undefined4)plVar10[1];
    uStack_18c = *(undefined4 *)((longlong)plVar10 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_198);
  }
  else {
    plVar10 = (longlong *)local_78[1];
    if (plVar10 != &local_138) goto LAB_140b84798;
  }
  local_170 = &local_138;
  puVar9 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_a0,1,uVar8,&local_178);
  uVar16 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (puVar9 != &local_128) {
    local_198 = *(undefined4 *)puVar9;
    uStack_194 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_190 = *(undefined4 *)(puVar9 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_198);
  }
  local_168 = &local_128;
  puVar9 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_1a8,2,CONCAT44(uVar16,DAT_1419ff868),&local_170);
  if (puVar9 != &local_b0) {
    local_198 = *(undefined4 *)puVar9;
    uStack_194 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_190 = *(undefined4 *)(puVar9 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    FUN_140041b80(&local_b0,&local_198);
  }
  local_e8 = 0x69;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4888);
  if ((int)local_80[0] < 1) {
    puVar9 = &DAT_1419df7b0;
LAB_140b84900:
    local_198 = *(undefined4 *)puVar9;
    uStack_194 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_190 = *(undefined4 *)(puVar9 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_198);
  }
  else {
    puVar9 = (undefined8 *)*local_78;
    if (puVar9 != &local_148) goto LAB_140b84900;
  }
  local_178 = &local_148;
  local_170 = &local_d0;
  local_168 = &local_b0;
  local_198 = _DAT_1419df7c0;
  uStack_194 = uRam00000001419df7c4;
  uStack_190 = uRam00000001419df7c8;
  uStack_18c = uRam00000001419df7cc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_198);
  local_160 = local_118;
  plVar10 = (longlong *)FUN_140e63610(param_1,param_2,&local_1a8,4,uVar8,&local_178);
  uVar16 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (plVar10 != &local_188) {
    local_198 = (undefined4)*plVar10;
    uStack_194 = *(undefined4 *)((longlong)plVar10 + 4);
    uStack_190 = (undefined4)plVar10[1];
    uStack_18c = *(undefined4 *)((longlong)plVar10 + 0xc);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_198);
  }
  local_e8 = 0x6a;
  if ((local_17c & 0xffffff) == 3) {
    bVar14 = local_188 == 0;
  }
  else {
    bVar14 = (local_17c & 0xffffff) == 5;
  }
  if (bVar14) {
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4888);
    if ((int)local_80[0] < 1) {
      puVar9 = &DAT_1419df7b0;
LAB_140b84a6f:
      local_198 = *(undefined4 *)puVar9;
      uStack_194 = *(undefined4 *)((longlong)puVar9 + 4);
      uStack_190 = *(undefined4 *)(puVar9 + 1);
      uStack_18c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_198);
    }
    else {
      puVar9 = (undefined8 *)*local_78;
      if (puVar9 != &local_148) goto LAB_140b84a6f;
    }
    local_178 = &local_148;
    local_170 = &local_d0;
    local_168 = &local_b0;
    local_198 = _DAT_1419df7a0;
    uStack_194 = uRam00000001419df7a4;
    uStack_190 = uRam00000001419df7a8;
    uStack_18c = uRam00000001419df7ac;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_198);
    local_160 = local_118;
    plVar10 = (longlong *)FUN_140e63610(param_1,param_2,&local_1a8,4,uVar8,&local_178);
    uVar16 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (plVar10 != &local_188) {
      local_198 = (undefined4)*plVar10;
      uStack_194 = *(undefined4 *)((longlong)plVar10 + 4);
      uStack_190 = (undefined4)plVar10[1];
      uStack_18c = *(undefined4 *)((longlong)plVar10 + 0xc);
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_198);
    }
  }
  local_e8 = 0x6b;
  iVar3 = FUN_140e851f0(&local_188,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_e8 = 0x6d;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f48e8);
    local_178 = &local_c0;
    FUN_140e63610(param_1,param_2,&local_1a8,1,uVar8,&local_178);
    local_e8 = 0x6e;
    cVar2 = FUN_140e491e0(&local_c0);
    if (cVar2 == '\0') {
      uStack_fc = *(undefined4 *)((longlong)puVar6 + 0xc);
      uStack_100 = *(undefined4 *)(puVar6 + 1);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_108 = *puVar6;
      }
      else {
        FUN_1400419b0(&local_108,puVar6);
      }
      puVar5 = &local_108;
      bVar1 = false;
      bVar14 = true;
    }
    else {
      uStack_d4 = *(undefined4 *)((longlong)puVar5 + 0xc);
      uStack_d8 = *(undefined4 *)(puVar5 + 1);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_e0 = *puVar5;
      }
      else {
        FUN_1400419b0(&local_e0,puVar5);
      }
      puVar5 = &local_e0;
      bVar1 = true;
      bVar14 = false;
    }
    if ((int)local_80[0] < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*local_78;
    }
    if (puVar5 != puVar6) {
      local_198 = *(undefined4 *)puVar5;
      uStack_194 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_190 = *(undefined4 *)(puVar5 + 1);
      uStack_18c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_198);
    }
    if ((bVar14) && ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_108);
    }
    if ((bVar1) && ((1 << ((byte)uStack_d4 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_e0);
    }
    local_e8 = 0x6f;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4888);
    if ((int)local_80[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_140b84d7e:
      local_198 = *(undefined4 *)puVar5;
      uStack_194 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_190 = *(undefined4 *)(puVar5 + 1);
      uStack_18c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_198);
    }
    else {
      puVar5 = (undefined8 *)*local_78;
      if (puVar5 != &local_148) goto LAB_140b84d7e;
    }
    local_178 = &local_148;
    local_170 = &local_d0;
    local_168 = &local_b0;
    local_198 = _DAT_1419df7c0;
    uStack_194 = uRam00000001419df7c4;
    uStack_190 = uRam00000001419df7c8;
    uStack_18c = uRam00000001419df7cc;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_198);
    local_160 = local_118;
    plVar10 = (longlong *)FUN_140e63610(param_1,param_2,&local_1a8,4,uVar8,&local_178);
    uVar16 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (plVar10 != &local_188) {
      local_198 = (undefined4)*plVar10;
      uStack_194 = *(undefined4 *)((longlong)plVar10 + 4);
      uStack_190 = (undefined4)plVar10[1];
      uStack_18c = *(undefined4 *)((longlong)plVar10 + 0xc);
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_198);
    }
    local_e8 = 0x70;
    uVar12 = local_80[0];
    if ((local_17c & 0xffffff) == 3) {
      if (local_188 == 0) goto LAB_140b84e99;
    }
    else if ((local_17c & 0xffffff) == 5) {
LAB_140b84e99:
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4888);
      if ((int)local_80[0] < 1) {
        puVar5 = &DAT_1419df7b0;
LAB_140b84eef:
        local_198 = *(undefined4 *)puVar5;
        uStack_194 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_190 = *(undefined4 *)(puVar5 + 1);
        uStack_18c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_198);
      }
      else {
        puVar5 = (undefined8 *)*local_78;
        if (puVar5 != &local_148) goto LAB_140b84eef;
      }
      local_178 = &local_148;
      local_170 = &local_d0;
      local_168 = &local_b0;
      local_198 = _DAT_1419df7a0;
      uStack_194 = uRam00000001419df7a4;
      uStack_190 = uRam00000001419df7a8;
      uStack_18c = uRam00000001419df7ac;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_198);
      local_160 = local_118;
      plVar10 = (longlong *)FUN_140e63610(param_1,param_2,&local_1a8,4,uVar8,&local_178);
      uVar16 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if (plVar10 != &local_188) {
        local_198 = (undefined4)*plVar10;
        uStack_194 = *(undefined4 *)((longlong)plVar10 + 4);
        uStack_190 = (undefined4)plVar10[1];
        uStack_18c = *(undefined4 *)((longlong)plVar10 + 0xc);
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140041b80(&local_188,&local_198);
      }
    }
  }
  else {
    uVar12 = local_80[0];
  }
  local_e8 = 0x72;
  if ((local_17c & 0xffffff) == 3) {
    bVar14 = local_188 == 0;
  }
  else {
    bVar14 = (local_17c & 0xffffff) == 5;
  }
  if (bVar14) {
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4888);
    if ((int)uVar12 < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_140b8505e:
      local_198 = *(undefined4 *)puVar5;
      uStack_194 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_190 = *(undefined4 *)(puVar5 + 1);
      uStack_18c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_198);
    }
    else {
      puVar5 = (undefined8 *)*local_78;
      if (puVar5 != &local_148) goto LAB_140b8505e;
    }
    local_178 = &local_148;
    local_170 = &local_d0;
    puVar5 = (undefined8 *)FUN_140e8da20(&local_a0,param_1,0);
    if (puVar5 != &local_128) {
      local_198 = *(undefined4 *)puVar5;
      uStack_194 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_190 = *(undefined4 *)(puVar5 + 1);
      uStack_18c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_198);
    }
    local_168 = &local_128;
    local_198 = _DAT_1419df7a0;
    uStack_194 = uRam00000001419df7a4;
    uStack_190 = uRam00000001419df7a8;
    uStack_18c = uRam00000001419df7ac;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_198);
    local_160 = local_118;
    plVar10 = (longlong *)FUN_140e63610(param_1,param_2,&local_1a8,4,uVar8,&local_178);
    uVar16 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (plVar10 != &local_188) {
      local_198 = (undefined4)*plVar10;
      uStack_194 = *(undefined4 *)((longlong)plVar10 + 4);
      uStack_190 = (undefined4)plVar10[1];
      uStack_18c = *(undefined4 *)((longlong)plVar10 + 0xc);
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_198);
    }
  }
  local_e8 = 0x73;
  if ((local_17c & 0xffffff) == 3) {
    bVar14 = local_188 == 0;
  }
  else {
    bVar14 = (local_17c & 0xffffff) == 5;
  }
  if (bVar14) {
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    if ((int)uVar12 < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_140b851fa:
      local_198 = *(undefined4 *)puVar5;
      uStack_194 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_190 = *(undefined4 *)(puVar5 + 1);
      uStack_18c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_198);
    }
    else {
      puVar5 = (undefined8 *)*local_78;
      if (puVar5 != &local_148) goto LAB_140b851fa;
    }
    local_178 = &local_148;
    ppuVar15 = &local_178;
    plVar10 = (longlong *)gml_Script_current_ms(param_1,param_2,&local_1a8,1,ppuVar15);
    uVar16 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
    if (plVar10 != &local_188) {
      local_198 = (undefined4)*plVar10;
      uStack_194 = *(undefined4 *)((longlong)plVar10 + 4);
      uStack_190 = (undefined4)plVar10[1];
      uStack_18c = *(undefined4 *)((longlong)plVar10 + 0xc);
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_198);
    }
  }
  local_e8 = 0x75;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if (((int)uVar12 < 1) || (puVar13 = (undefined8 *)*local_78, puVar13 != &local_148)) {
    local_198 = *(undefined4 *)puVar13;
    uStack_194 = *(undefined4 *)((longlong)puVar13 + 4);
    uStack_190 = *(undefined4 *)(puVar13 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar13 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_198);
  }
  local_178 = &local_148;
  local_170 = &local_188;
  ppuVar15 = &local_178;
  uVar11 = CONCAT44(uVar16,DAT_141a01138);
  puVar13 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1a8,2,uVar11,ppuVar15);
  if (puVar13 != &local_90) {
    local_198 = *(undefined4 *)puVar13;
    uStack_194 = *(undefined4 *)((longlong)puVar13 + 4);
    uStack_190 = *(undefined4 *)(puVar13 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar13 + 0xc);
    if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    FUN_140041b80(&local_90,&local_198);
  }
  local_e8 = 0x76;
  FUN_140e87440(&local_90,DAT_141a0ab58,0x80000000,&local_158,uVar11 & 0xffffffffffffff00,
                (ulonglong)ppuVar15 & 0xffffffffffffff00);
  uVar4 = local_14c & 0xffffff;
  if (uVar4 != 0) {
    if (uVar4 == 1) {
      local_158 = (double)FUN_140e4b060(&local_158);
      local_158 = local_158 - 1.0;
      local_14c = 0;
      goto LAB_140b853fd;
    }
    if (uVar4 == 7) {
      local_158 = (double)CONCAT44(local_158._4_4_,local_158._0_4_ + -1);
      goto LAB_140b853fd;
    }
    if (uVar4 == 10) {
      local_158 = (double)((longlong)local_158 + -1);
      goto LAB_140b853fd;
    }
    if (uVar4 != 0xd) {
      FUN_140042910(&DAT_14172c450,&local_158,&local_158);
      goto LAB_140b853fd;
    }
    local_14c = 0;
  }
  local_158 = local_158 + -1.0;
LAB_140b853fd:
  FUN_140e87930(&local_90,DAT_141a0ab58,0x80000000,&local_158);
  local_e8 = 0x77;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  local_178 = &local_d0;
  local_170 = &local_188;
  ppuVar15 = &local_178;
  gml_Script_rolled_list_new_run(param_1,param_2,&local_1a8,2,ppuVar15);
  uVar16 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
  local_e8 = 0x79;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  local_178 = &local_90;
  puVar13 = (undefined8 *)
            FUN_140e634e0(param_1,param_2,&local_1a8,1,CONCAT44(uVar16,DAT_1419fd0c8),&local_178);
  if (puVar13 != param_3) {
    local_198 = *(undefined4 *)puVar13;
    uStack_194 = *(undefined4 *)((longlong)puVar13 + 4);
    uStack_190 = *(undefined4 *)(puVar13 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar13 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_198);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,4,FUN_140041b30);
  if (0 < (int)uVar12) {
    uVar11 = (ulonglong)uVar12;
    puVar13 = local_78;
    do {
      puVar5 = (undefined8 *)*puVar13;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar13 = puVar13 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_78);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

