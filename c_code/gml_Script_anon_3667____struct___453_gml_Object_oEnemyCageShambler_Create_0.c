// gml_Script_anon_3667____struct___453_gml_Object_oEnemyCageShambler_Create_0 @ 0x140956b20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_3667____struct___453_gml_Object_oEnemyCageShambler_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined4 uVar11;
  double dVar12;
  longlong *plVar13;
  undefined8 **ppuVar14;
  undefined8 local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  double local_138;
  uint local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  longlong *local_88;
  undefined4 local_80;
  uint local_7c;
  longlong *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_d0 = "gml_Script_anon@2972@___struct___452@gml_Object_oEnemyCageShambler_Create_0";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x88;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_108,0x10,3,FUN_1400424d0,FUN_140041b30);
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_6c = 0xffffff;
  local_78 = (longlong *)0x0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_7c = 0xffffff;
  local_88 = (longlong *)0x0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_13c = 0;
  local_148 = 0;
  local_10c = 0;
  local_118 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x8a;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar3 != &local_108) {
    local_158 = (longlong *)*puVar3;
    uStack_150 = *(undefined4 *)(puVar3 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
  }
  local_c0 = &local_108;
  uVar4 = FUN_140e634e0(param_1,param_2,&local_148,1,CONCAT44(uVar11,DAT_141a02ef8),&local_c0);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_c8 = 0x8b;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
    FUN_140e609c0(param_1);
    puVar6 = (undefined8 *)gml_Script_FracPos(param_1,param_2,&local_118,0,0);
    if (puVar6 != puVar5) {
      local_158 = (longlong *)*puVar6;
      uStack_150 = *(undefined4 *)(puVar6 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_158);
    }
    FUN_140e60910(1);
  }
  local_c8 = 0x8d;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if (puVar5 != &local_108) {
    local_158 = (longlong *)*puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
  }
  local_c0 = &local_108;
  local_158 = (longlong *)CONCAT44(uRam0000000141dc6e54,_DAT_141dc6e50);
  uStack_150 = uRam0000000141dc6e58;
  uStack_14c = uRam0000000141dc6e5c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_158);
  local_b8 = &local_f8;
  uStack_14c = 0;
  local_158 = (longlong *)0x3fb999999999999a;
  FUN_140042560(&local_158,puVar2);
  local_128 = (undefined4)local_158;
  uStack_124 = local_158._4_4_;
  uStack_120 = uStack_150;
  uStack_11c = uStack_14c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_128);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_b0 = local_e8;
  FUN_140e609c0(param_1);
  ppuVar14 = &local_c0;
  puVar8 = (undefined4 *)gml_Script_arc(param_1,param_2,&local_148,3,ppuVar14);
  uVar11 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
  if (puVar8 != puVar7) {
    local_128 = *puVar8;
    uStack_124 = puVar8[1];
    uStack_120 = puVar8[2];
    uStack_11c = puVar8[3];
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_128);
  }
  FUN_140e60910(1);
  local_c8 = 0x8e;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_14c = *(uint *)((longlong)puVar5 + 0xc);
  uStack_150 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
    local_158 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_158,puVar5);
  }
  FUN_140042560(&local_158,puVar2);
  FUN_1400460e0(uVar4,&local_158);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_c8 = 0x92;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if (puVar3 != &local_108) {
    local_128 = *(undefined4 *)puVar3;
    uStack_124 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_120 = *(undefined4 *)(puVar3 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_128);
  }
  local_c0 = &local_108;
  ppuVar14 = &local_c0;
  uVar9 = CONCAT44(uVar11,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_148,1,uVar9,ppuVar14);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
LAB_14095739f:
    local_c8 = 0x95;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar4,DAT_141a55540,0x80000000,&local_68,uVar9 & 0xffffffffffffff00,
                  (ulonglong)ppuVar14 & 0xffffffffffffff00);
    local_128 = _DAT_141dd87d8;
    uStack_124 = uRam0000000141dd87dc;
    uStack_120 = uRam0000000141dd87e0;
    uStack_11c = DAT_141dd87e4;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_128);
    local_c0 = &local_108;
    puVar3 = &local_148;
    ppuVar14 = &local_c0;
  }
  else {
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    plVar13 = param_1;
    uVar9 = param_2;
    FUN_140e87170(uVar4,DAT_1419fe0e8,0x80000000,&local_78,param_1,param_2);
    uStack_14c = 6;
    ppuVar14 = (undefined8 **)(uVar9 & 0xffffffffffffff00);
    uVar9 = (ulonglong)plVar13 & 0xffffffffffffff00;
    local_158 = param_1;
    FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_48,uVar9,ppuVar14);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    uStack_14c = local_6c;
    uStack_150 = local_70;
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) == 0) {
      local_158 = local_78;
    }
    else {
      FUN_1400419b0(&local_158,&local_78);
    }
    FUN_1400462a0(&local_158,&local_48);
    if ((uStack_14c & 0xffffff) == 0) {
      uVar11 = SUB84(local_158,0);
    }
    else {
      uVar11 = FUN_140e4b060(&local_158);
    }
    dVar12 = (double)FUN_140e78d00(uVar11);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if (64.0 < dVar12) goto LAB_14095739f;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    plVar13 = param_1;
    uVar9 = param_2;
    FUN_140e87170(uVar4,DAT_1419fe158,0x80000000,&local_88,param_1,param_2);
    uStack_14c = 6;
    ppuVar14 = (undefined8 **)(uVar9 & 0xffffffffffffff00);
    uVar9 = (ulonglong)plVar13 & 0xffffffffffffff00;
    local_158 = param_1;
    FUN_140e87440(&local_158,DAT_1419fe158,0x80000000,&local_58,uVar9,ppuVar14);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    uStack_14c = local_7c;
    uStack_150 = local_80;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
      local_158 = local_88;
    }
    else {
      FUN_1400419b0(&local_158,&local_88);
    }
    FUN_1400462a0(&local_158,&local_58);
    if ((uStack_14c & 0xffffff) == 0) {
      uVar11 = SUB84(local_158,0);
    }
    else {
      uVar11 = FUN_140e4b060(&local_158);
    }
    dVar12 = (double)FUN_140e78d00(uVar11);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if (24.0 < dVar12) goto LAB_14095739f;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a096c8);
    ppuVar14 = (undefined8 **)0x0;
    uVar4 = FUN_140e63610(param_1,param_2,&local_118,0,uVar9,0);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 == '\0') goto LAB_14095739f;
    local_c8 = 0x93;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar4,DAT_141a55540,0x80000000,&local_68,uVar9 & 0xffffffffffffff00,
                  (ulonglong)ppuVar14 & 0xffffffffffffff00);
    local_128 = _DAT_141dd87a8;
    uStack_124 = uRam0000000141dd87ac;
    uStack_120 = uRam0000000141dd87b0;
    uStack_11c = DAT_141dd87b4;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_128);
    local_b8 = &local_f8;
    puVar3 = &local_a8;
    ppuVar14 = &local_b8;
  }
  uVar4 = FUN_140069500(uVar4);
  FUN_140e63610(uVar4,param_2,puVar3,1,&local_68,ppuVar14);
  local_c8 = 0x97;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_148,0,uVar4,0);
  local_c8 = 0x98;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_148,0,uVar4,0);
  local_c8 = 0x99;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
  FUN_140e63610(param_1,param_2,&local_148,0,uVar4,0);
  local_c8 = 0x9a;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd588);
  local_128 = (undefined4)DAT_1419df7b0;
  uStack_124 = DAT_1419df7b0._4_4_;
  uStack_120 = DAT_1419df7b8;
  uStack_11c = DAT_1419df7bc;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_128);
  local_c0 = &local_108;
  local_128 = (undefined4)DAT_1419df7b0;
  uStack_124 = DAT_1419df7b0._4_4_;
  uStack_120 = DAT_1419df7b8;
  uStack_11c = DAT_1419df7bc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_128);
  local_b8 = &local_f8;
  local_128 = _DAT_1419ea570;
  uStack_124 = uRam00000001419ea574;
  uStack_120 = uRam00000001419ea578;
  uStack_11c = uRam00000001419ea57c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_128);
  local_b0 = local_e8;
  ppuVar14 = &local_c0;
  FUN_140e63610(param_1,param_2,&local_148,3,uVar9,ppuVar14);
  local_c8 = 0x9c;
  if (puVar2 != &local_98) {
    local_128 = *(undefined4 *)puVar2;
    uStack_124 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_120 = *(undefined4 *)(puVar2 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_128);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_98);
  local_c8 = 0x9e;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar4,DAT_141a0a848,0x80000000,&local_138,uVar9 & 0xffffffffffffff00,
                (ulonglong)ppuVar14 & 0xffffffffffffff00);
  uVar10 = local_12c & 0xffffff;
  if (uVar10 != 0) {
    if (uVar10 == 1) {
      local_138 = (double)FUN_140e4b060(&local_138);
      local_12c = 0;
    }
    else {
      if (uVar10 == 7) {
        local_138 = (double)CONCAT44(local_138._4_4_,local_138._0_4_ + 1);
        goto LAB_14095778f;
      }
      if (uVar10 == 10) {
        local_138 = (double)((longlong)local_138 + 1);
        goto LAB_14095778f;
      }
      if (uVar10 != 0xd) {
        FUN_140042910(&DAT_14172c3d8,&local_138,&local_138);
        goto LAB_14095778f;
      }
      local_12c = 0;
    }
  }
  local_138 = local_138 + 1.0;
LAB_14095778f:
  FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_138);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

