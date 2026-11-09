// gml_Script_anon_2381____struct___532_gml_Object_oEnemySlime_Create_0 @ 0x140a75950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_2381____struct___532_gml_Object_oEnemySlime_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 uVar11;
  undefined8 **ppuVar9;
  ulonglong uVar10;
  undefined1 **ppuVar12;
  ulonglong uVar13;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  uint local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  undefined8 local_198;
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  
  local_1b0 = "gml_Script_anon@1717@___struct___531@gml_Object_oEnemySlime_Create_0";
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  local_1a8 = 0x4e;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_198,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0.0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  local_e4 = 0;
  local_f0 = 0;
  local_f4 = 0;
  local_100 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1a8 = 0x50;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar5 != &local_198) {
    local_208 = (longlong *)*puVar5;
    uStack_200 = *(undefined4 *)(puVar5 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_208);
  }
  local_128 = &local_198;
  uVar6 = FUN_140e634e0(param_1,param_2,&local_1f8,1,CONCAT44(uVar11,DAT_141a02ef8),&local_128);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 == '\0') {
    local_1a8 = 0x51;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
    FUN_140e609c0(param_1);
    puVar7 = (undefined8 *)gml_Script_FracPos(param_1,param_2,&local_1c8,0,0);
    if (puVar7 != puVar5) {
      local_208 = (longlong *)*puVar7;
      uStack_200 = *(undefined4 *)(puVar7 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_208);
    }
    FUN_140e60910(1);
  }
  local_1a8 = 0x53;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff968);
  uVar6 = FUN_140e63610(param_1,param_2,&local_1f8,0,uVar6,0);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 == '\0') {
    local_1a8 = 0x67;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    if (puVar5 != &local_198) {
      local_208 = (longlong *)*puVar5;
      uStack_200 = *(undefined4 *)(puVar5 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_208);
    }
    local_128 = &local_198;
    local_208 = (longlong *)CONCAT44(uRam0000000141dc6fc4,_DAT_141dc6fc0);
    uStack_200 = uRam0000000141dc6fc8;
    uStack_1fc = uRam0000000141dc6fcc;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_208);
    local_120 = local_188;
    local_208 = (longlong *)CONCAT44(uRam00000001419eb094,_DAT_1419eb090);
    uStack_200 = uRam00000001419eb098;
    uStack_1fc = uRam00000001419eb09c;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_208);
    local_118 = local_178;
    FUN_140e609c0(param_1);
    puVar5 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_1f8,3,&local_128);
    if (puVar5 != puVar7) {
      local_208 = (longlong *)*puVar5;
      uStack_200 = *(undefined4 *)(puVar5 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_208);
    }
    FUN_140e60910(1);
  }
  else {
    local_1a8 = 0x55;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    if (puVar5 != &local_198) {
      local_208 = (longlong *)*puVar5;
      uStack_200 = *(undefined4 *)(puVar5 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_208);
    }
    local_128 = &local_198;
    local_208 = (longlong *)CONCAT44(uRam0000000141dc6fc4,_DAT_141dc6fc0);
    uStack_200 = uRam0000000141dc6fc8;
    uStack_1fc = uRam0000000141dc6fcc;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_208);
    local_120 = local_188;
    local_208 = (longlong *)CONCAT44(uRam00000001419eb0c4,_DAT_1419eb0c0);
    uStack_200 = uRam00000001419eb0c8;
    uStack_1fc = uRam00000001419eb0cc;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_208);
    local_118 = local_178;
    FUN_140e609c0(param_1);
    ppuVar9 = &local_128;
    puVar5 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_1c8,3,ppuVar9);
    uVar11 = (undefined4)((ulonglong)ppuVar9 >> 0x20);
    if (puVar5 != puVar7) {
      local_208 = (longlong *)*puVar5;
      uStack_200 = *(undefined4 *)(puVar5 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_208);
    }
    FUN_140e60910(1);
    local_1a8 = 0x58;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    local_f0 = 0;
    local_e8 = 0;
    local_e4 = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a096c8);
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5a58);
    local_208 = (longlong *)CONCAT44(uRam0000000141dc6fc4,_DAT_141dc6fc0);
    uStack_200 = uRam0000000141dc6fc8;
    uStack_1fc = uRam0000000141dc6fcc;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_208);
    local_128 = &local_198;
    local_208 = (longlong *)CONCAT44(uRam0000000141dc6fc4,_DAT_141dc6fc0);
    uStack_200 = uRam0000000141dc6fc8;
    uStack_1fc = uRam0000000141dc6fcc;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_208);
    local_120 = local_188;
    uStack_1dc = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_1e0 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
      local_1e8 = *puVar7;
    }
    else {
      FUN_1400419b0(&local_1e8,puVar7);
    }
    FUN_140046500(&local_1e8,uVar6);
    uVar6 = CONCAT44(uVar11,DAT_141a0a0d8);
    puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f0,1,uVar6,&local_120);
    uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
    local_12c = *(undefined4 *)((longlong)puVar7 + 0xc);
    local_130 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
      local_138 = *puVar7;
    }
    else {
      FUN_1400419b0(&local_138,puVar7);
    }
    uStack_1fc = 0;
    local_208 = (longlong *)0x3ff4000000000000;
    FUN_140042560(&local_138,&local_208);
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_9c = local_12c;
    local_a0 = local_130;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
      local_a8 = local_138;
    }
    else {
      FUN_1400419b0(&local_a8,&local_138);
    }
    FUN_140042560(&local_a8,&local_1e8);
    puVar7 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_1c8,1,CONCAT44(uVar11,DAT_141a0a0d8),&local_128);
    local_13c = *(undefined4 *)((longlong)puVar7 + 0xc);
    local_140 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
      local_148 = (undefined1 *)*puVar7;
    }
    else {
      FUN_1400419b0(&local_148,puVar7);
    }
    uStack_1fc = 7;
    local_208 = (longlong *)CONCAT44(local_208._4_4_,2);
    FUN_140042560(&local_148,&local_208);
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    uStack_ac = local_13c;
    uStack_b0 = local_140;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
      local_b8 = local_148;
    }
    else {
      FUN_1400419b0(&local_b8,&local_148);
    }
    FUN_1400462a0(&local_b8,&local_a8);
    local_208 = (longlong *)local_b8;
    uStack_200 = uStack_b0;
    uStack_1fc = uStack_ac;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_208);
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_118 = local_178;
    ppuVar12 = &local_118;
    uVar6 = FUN_140e63610(param_1,param_2,&local_1f8,1,puVar5,ppuVar12);
    cVar1 = FUN_140e491e0(uVar6);
    if (cVar1 != '\0') {
      local_1a8 = 0x5a;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
      uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5a58);
      iVar2 = FUN_140e851f0(uVar6,uVar8,DAT_141955260,1);
      if (iVar2 != -2 && iVar2 < 0) {
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
        ppuVar12 = (undefined1 **)((ulonglong)ppuVar12 & 0xffffffffffffff00);
        puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffffffffff00);
        FUN_140e87440(uVar6,DAT_1419f03f8,0x80000000,&local_68,puVar5,ppuVar12);
        uStack_1fc = 0;
        local_208 = (longlong *)0x3ff0000000000000;
        uVar3 = FUN_140e851f0(&local_68,&local_208,DAT_141955260,1);
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        if (uVar3 < 0x80000000) {
          if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_100);
          }
          local_100 = 0;
          local_f8 = 0;
          local_f4 = 5;
          uStack_1fc = 0xf;
          local_208 = (longlong *)0x100000000000014;
          uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
          uVar10 = (ulonglong)puVar5 & 0xffffffffffffff00;
          FUN_140e87440(&local_208,DAT_1419f5978,0x80000000,&local_78,uVar10,uVar13);
          if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          uStack_1fc = 6;
          uVar13 = uVar13 & 0xffffffffffffff00;
          uVar10 = uVar10 & 0xffffffffffffff00;
          local_208 = param_1;
          FUN_140e87440(&local_208,DAT_1419fe0e8,0x80000000,&local_88,uVar10,uVar13);
          if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          uStack_1fc = 6;
          local_208 = param_1;
          FUN_140e87440(&local_208,DAT_1419fe158,0x80000000,&local_d0,uVar10 & 0xffffffffffffff00,
                        uVar13 & 0xffffffffffffff00);
          if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          local_208 = (longlong *)local_88;
          uStack_200 = uStack_80;
          uStack_1fc = uStack_7c;
          if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_208);
          local_110 = local_168;
          uStack_1dc = local_c4;
          uStack_1e0 = local_c8;
          if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) == 0) {
            local_1e8 = local_d0;
          }
          else {
            FUN_1400419b0(&local_1e8,&local_d0);
          }
          uStack_1fc = 7;
          local_208 = (longlong *)CONCAT44(local_208._4_4_,2);
          FUN_1400460e0(&local_1e8,&local_208);
          if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          local_208 = (longlong *)local_1e8;
          uStack_200 = uStack_1e0;
          uStack_1fc = uStack_1dc;
          if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_158);
          }
          FUN_140041b80(local_158,&local_208);
          if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          local_108 = local_158;
          uStack_1dc = 0xf;
          local_1e8 = 0x100000000000014;
          uVar6 = FUN_140069500(&local_1e8);
          ppuVar12 = &local_110;
          puVar5 = &local_78;
          uVar6 = FUN_140e63610(uVar6,param_2,&local_100,2,puVar5,ppuVar12);
          uStack_1fc = 0;
          local_208 = (longlong *)&DAT_bff0000000000000;
          iVar2 = FUN_140e851f0(uVar6,&local_208,DAT_141955260,0);
          if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          if (iVar2 != 0) {
            local_1a8 = 0x5c;
            puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57420);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar4);
            }
            *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
            *puVar4 = 0;
            local_1a8 = 0x5d;
            if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f8);
            }
            local_1f8 = 0;
            local_1f0 = 0;
            local_1ec = 5;
            uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
            FUN_140e87440(uVar6,DAT_141a55540,0x80000000,&local_98,
                          (ulonglong)puVar5 & 0xffffffffffffff00,
                          (ulonglong)ppuVar12 & 0xffffffffffffff00);
            local_208 = (longlong *)CONCAT44(uRam0000000141dd8f9c,_DAT_141dd8f98);
            uStack_200 = uRam0000000141dd8fa0;
            uStack_1fc = DAT_141dd8fa4;
            if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_198);
            }
            FUN_140041b80(&local_198,&local_208);
            local_128 = &local_198;
            uVar6 = FUN_140069500(uVar6);
            FUN_140e63610(uVar6,param_2,&local_1f8,1,&local_98,&local_128);
            local_1a8 = 0x5e;
            uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
            if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            local_1cc = 0;
            local_1d8 = 0.0;
            FUN_140e87930(uVar6,DAT_1419f03f8,0x80000000,&local_1d8);
            local_1a8 = 0x5f;
            goto LAB_140a76d42;
          }
        }
      }
      local_1a8 = 0x61;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar6,DAT_141a55540,0x80000000,&local_98,(ulonglong)puVar5 & 0xffffffffffffff00,
                    (ulonglong)ppuVar12 & 0xffffffffffffff00);
      local_208 = (longlong *)CONCAT44(uRam0000000141dd8fac,_DAT_141dd8fa8);
      uStack_200 = uRam0000000141dd8fb0;
      uStack_1fc = DAT_141dd8fb4;
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_208);
      local_128 = &local_198;
      uVar6 = FUN_140069500(uVar6);
      ppuVar9 = &local_128;
      puVar5 = &local_98;
      FUN_140e63610(uVar6,param_2,&local_1f8,1,puVar5,ppuVar9);
      local_1a8 = 0x62;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      FUN_140e87440(uVar6,DAT_1419f03f8,0x80000000,&local_1d8,(ulonglong)puVar5 & 0xffffffffffffff00
                    ,(ulonglong)ppuVar9 & 0xffffffffffffff00);
      uVar3 = local_1cc & 0xffffff;
      if (uVar3 == 0) {
LAB_140a76870:
        local_1d8 = local_1d8 + 1.0;
      }
      else {
        if (uVar3 == 1) {
          local_1d8 = (double)FUN_140e4b060(&local_1d8);
          local_1cc = 0;
          goto LAB_140a76870;
        }
        if (uVar3 == 7) {
          local_1d8 = (double)CONCAT44(local_1d8._4_4_,local_1d8._0_4_ + 1);
        }
        else if (uVar3 == 10) {
          local_1d8 = (double)((longlong)local_1d8 + 1);
        }
        else {
          if (uVar3 == 0xd) {
            local_1cc = 0;
            goto LAB_140a76870;
          }
          FUN_140042910(&DAT_14172c3d8,&local_1d8,&local_1d8);
        }
      }
      FUN_140e87930(uVar6,DAT_1419f03f8,0x80000000,&local_1d8);
    }
  }
  local_1a8 = 0x6a;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_1dc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_1e0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
    local_1e8 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_1e8,puVar5);
  }
  FUN_140042560(&local_1e8,puVar4);
  FUN_1400460e0(uVar6,&local_1e8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1a8 = 0x6d;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_1f8,0,uVar6,0);
  local_1a8 = 0x6e;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_1f8,0,uVar6,0);
  local_1a8 = 0x6f;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
  FUN_140e63610(param_1,param_2,&local_1f8,0,uVar6,0);
  local_1a8 = 0x70;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd588);
  local_208 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_200 = DAT_1419df7b8;
  uStack_1fc = DAT_1419df7bc;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_208);
  local_128 = &local_198;
  local_208 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_200 = DAT_1419df7b8;
  uStack_1fc = DAT_1419df7bc;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_208);
  local_120 = local_188;
  local_208 = (longlong *)CONCAT44(uRam00000001419eb084,_DAT_1419eb080);
  uStack_200 = uRam00000001419eb088;
  uStack_1fc = uRam00000001419eb08c;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_208);
  local_118 = local_178;
  FUN_140e63610(param_1,param_2,&local_1f8,3,uVar6,&local_128);
  local_1a8 = 0x72;
  if (puVar4 != &local_e0) {
    local_208 = (longlong *)*puVar4;
    uStack_200 = *(undefined4 *)(puVar4 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    FUN_140041b80(&local_e0,&local_208);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_e0);
LAB_140a76d42:
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_198,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1b8;
  return param_3;
}

