// gml_Script____struct___549_gml_Object_oEnemyWormBrute_Create_0 @ 0x140a9ae10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___549_gml_Object_oEnemyWormBrute_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  code *pcVar13;
  undefined4 **ppuVar14;
  undefined4 uVar15;
  ulonglong in_stack_fffffffffffffe80;
  ulonglong uVar16;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148 [3];
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 *local_108;
  undefined8 *local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  char *local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined4 local_cc;
  longlong local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_e8 = "gml_Script_anon@8259@___struct___549@gml_Object_oEnemyWormBrute_Create_0";
  local_f0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f0;
  local_e0 = 0x16d;
  pcVar13 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_148,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_16c = 0;
  local_178 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e0 = 0x16e;
  local_78 = uVar4;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2268);
  FUN_140e87440(uVar5,DAT_1419f2378,0x80000000,&local_88,(ulonglong)pcVar13 & 0xffffffffffffff00,
                in_stack_fffffffffffffe80 & 0xffffffffffffff00);
  local_168 = local_88;
  uStack_160 = uStack_80;
  uStack_15c = uStack_7c;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_168);
  local_108 = local_148;
  uVar16 = 0;
  puVar7 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_118,0,uVar6,0);
  if (puVar7 != &local_138) {
    local_168 = *puVar7;
    uStack_160 = *(undefined4 *)(puVar7 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_168);
  }
  local_100 = &local_138;
  uStack_15c = 0;
  local_168 = 0x4008000000000000;
  FUN_140042560(&local_168,uVar4);
  local_158 = (undefined4)local_168;
  uStack_154 = local_168._4_4_;
  uStack_150 = uStack_160;
  uStack_14c = uStack_15c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_158);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_f8 = local_128;
  ppuVar14 = &local_108;
  puVar7 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_178,3,ppuVar14);
  if (puVar7 != &local_a8) {
    local_158 = *(undefined4 *)puVar7;
    uStack_154 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_150 = *(undefined4 *)(puVar7 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_158);
  }
  FUN_140e87930(uVar5,DAT_1419f2378,0x80000000,&local_a8);
  local_e0 = 0x16f;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2578);
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar6,DAT_1419f2568,0x80000000,&local_98,(ulonglong)ppuVar14 & 0xffffffffffffff00,
                uVar16 & 0xffffffffffffff00);
  local_158 = (undefined4)local_98;
  uStack_154 = local_98._4_4_;
  uStack_150 = uStack_90;
  uStack_14c = uStack_8c;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_158);
  local_108 = local_148;
  puVar7 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_118,0,uVar5,0);
  if (puVar7 != &local_138) {
    local_158 = *(undefined4 *)puVar7;
    uStack_154 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_150 = *(undefined4 *)(puVar7 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
  }
  local_100 = &local_138;
  uStack_15c = 0;
  local_168 = 0x4014000000000000;
  FUN_140042560(&local_168,uVar4);
  local_158 = (undefined4)local_168;
  uStack_154 = local_168._4_4_;
  uStack_150 = uStack_160;
  uStack_14c = uStack_15c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_158);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_f8 = local_128;
  ppuVar14 = &local_108;
  puVar7 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_178,3,ppuVar14);
  uVar15 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
  if (puVar7 != &local_b8) {
    local_158 = *(undefined4 *)puVar7;
    uStack_154 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_150 = *(undefined4 *)(puVar7 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_158);
  }
  FUN_140e87930(uVar6,DAT_1419f2568,0x80000000,&local_b8);
  local_e0 = 0x171;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2428);
  puVar9 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2428);
  if (puVar8 != local_148) {
    local_158 = *puVar8;
    uStack_154 = puVar8[1];
    uStack_150 = puVar8[2];
    uStack_14c = puVar8[3];
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_158);
  }
  local_108 = local_148;
  local_158 = _DAT_1419eb1b0;
  uStack_154 = uRam00000001419eb1b4;
  uStack_150 = uRam00000001419eb1b8;
  uStack_14c = uRam00000001419eb1bc;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_158);
  local_100 = &local_138;
  local_158 = _DAT_1419eb220;
  uStack_154 = uRam00000001419eb224;
  uStack_150 = uRam00000001419eb228;
  uStack_14c = uRam00000001419eb22c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_158);
  local_f8 = local_128;
  FUN_140e609c0(param_1);
  ppuVar14 = &local_108;
  uVar16 = CONCAT44(uVar15,DAT_141a00c58);
  puVar8 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_178,3,uVar16,ppuVar14);
  if (puVar8 != puVar9) {
    local_158 = *puVar8;
    uStack_154 = puVar8[1];
    uStack_150 = puVar8[2];
    uStack_14c = puVar8[3];
    if ((1 << ((byte)puVar9[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_158);
  }
  FUN_140e60910(1);
  local_e0 = 0x172;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f21a8);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2318);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2428);
  FUN_140e87440(uVar4,DAT_1419f2378,0x80000000,&local_88,uVar16 & 0xffffffffffffff00,
                (ulonglong)ppuVar14 & 0xffffffffffffff00);
  uStack_15c = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_160 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
    local_168 = *puVar7;
  }
  else {
    FUN_1400419b0(&local_168,puVar7);
  }
  FUN_1400460e0(&local_168,&local_88);
  local_158 = (undefined4)local_168;
  uStack_154 = local_168._4_4_;
  uStack_150 = uStack_160;
  uStack_14c = uStack_15c;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_158);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_108 = local_148;
  if (puVar11 != &local_138) {
    local_158 = *(undefined4 *)puVar11;
    uStack_154 = *(undefined4 *)((longlong)puVar11 + 4);
    uStack_150 = *(undefined4 *)(puVar11 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar11 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
  }
  local_100 = &local_138;
  ppuVar14 = &local_108;
  FUN_140e63610(param_1,param_2,&local_178,2,uVar10,ppuVar14);
  local_e0 = 0x173;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f24c8);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2318);
  FUN_140e87440(uVar4,DAT_1419f2568,0x80000000,&local_98,uVar10 & 0xffffffffffffff00,
                (ulonglong)ppuVar14 & 0xffffffffffffff00);
  uStack_15c = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_160 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
    local_168 = *puVar7;
  }
  else {
    FUN_1400419b0(&local_168,puVar7);
  }
  FUN_1400460e0(&local_168,&local_98);
  local_158 = (undefined4)local_168;
  uStack_154 = local_168._4_4_;
  uStack_150 = uStack_160;
  uStack_14c = uStack_15c;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_158);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_108 = local_148;
  local_158 = _DAT_141dc6fe0;
  uStack_154 = uRam0000000141dc6fe4;
  uStack_150 = uRam0000000141dc6fe8;
  uStack_14c = uRam0000000141dc6fec;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_158);
  local_100 = &local_138;
  local_158 = _DAT_1419eb1d0;
  uStack_154 = uRam00000001419eb1d4;
  uStack_150 = uRam00000001419eb1d8;
  uStack_14c = uRam00000001419eb1dc;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_158);
  local_f8 = local_128;
  FUN_140e609c0(param_1);
  puVar9 = (undefined4 *)gml_RoomCC_rmGravePit01_0_Create(param_1,param_2,&local_178,3,&local_108);
  if (puVar9 != puVar8) {
    local_158 = *puVar9;
    uStack_154 = puVar9[1];
    uStack_150 = puVar9[2];
    uStack_14c = puVar9[3];
    if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_158);
  }
  FUN_140e60910(1);
  local_e0 = 0x174;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2468);
  FUN_140e63610(param_1,param_2,&local_178,0,uVar4,0);
  local_e0 = 0x175;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f22c8);
  plVar12 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
  iVar2 = FUN_140e4a740(uVar4);
  if (((*(uint *)((longlong)plVar12 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar12, lVar1 != 0)) {
    if ((iVar2 < 0) || (*(int *)(lVar1 + 0x24) <= iVar2)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar12 = (longlong *)0x0;
    }
    else {
      plVar12 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar12 != &local_c8) {
    local_158 = (undefined4)*plVar12;
    uStack_154 = *(undefined4 *)((longlong)plVar12 + 4);
    uStack_150 = (undefined4)plVar12[1];
    uStack_14c = *(undefined4 *)((longlong)plVar12 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_158);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_c8);
  local_e0 = 0x176;
  plVar12 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
  iVar2 = FUN_140e4a740(uVar4);
  if (((*(uint *)((longlong)plVar12 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar12, lVar1 != 0)) {
    if ((iVar2 < 0) || (*(int *)(lVar1 + 0x24) <= iVar2)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar12 = (longlong *)0x0;
    }
    else {
      plVar12 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar12 != &local_d8) {
    local_158 = (undefined4)*plVar12;
    uStack_154 = *(undefined4 *)((longlong)plVar12 + 4);
    uStack_150 = (undefined4)plVar12[1];
    uStack_14c = *(undefined4 *)((longlong)plVar12 + 0xc);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_158);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_d8);
  local_e0 = 0x178;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_178,0,uVar4,0);
  local_e0 = 0x179;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  uVar16 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
  uVar10 = 0;
  FUN_140e63610(param_1,param_2,&local_178,0,uVar16,0);
  local_e0 = 0x17b;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  (**(code **)(*param_1 + 8))(param_1,DAT_1419f22c8);
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_141a0a848,0x80000000,&local_68,uVar16,uVar10);
  FUN_1400460e0(&local_68,local_78);
  FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_68);
  local_e0 = 0x17c;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar16 = uVar16 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_141a0a848,0x80000000,&local_48,uVar16,uVar10 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar16 >> 0x20);
  local_158 = _DAT_141dc6fe0;
  uStack_154 = uRam0000000141dc6fe4;
  uStack_150 = uRam0000000141dc6fe8;
  uStack_14c = uRam0000000141dc6fec;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_158);
  local_108 = local_148;
  ppuVar14 = &local_108;
  uVar16 = CONCAT44(uVar15,DAT_141a0a0d8);
  puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_178,1,uVar16,ppuVar14);
  uStack_15c = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_160 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
    local_168 = *puVar7;
  }
  else {
    FUN_1400419b0(&local_168,puVar7);
  }
  local_6c = 0;
  local_78 = 0x3ff8000000000000;
  FUN_140042560(&local_168,&local_78);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  uVar3 = FUN_140e851f0(&local_48,&local_168,DAT_141955260,1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (uVar3 < 0x80000000) {
    local_e0 = 0x17d;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar4,DAT_141a55540,0x80000000,&local_58,uVar16 & 0xffffffffffffff00,
                  (ulonglong)ppuVar14 & 0xffffffffffffff00);
    local_158 = _DAT_141dd90f8;
    uStack_154 = uRam0000000141dd90fc;
    uStack_150 = uRam0000000141dd9100;
    uStack_14c = DAT_141dd9104;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
    local_100 = &local_138;
    uVar4 = FUN_140069500(uVar4);
    FUN_140e63610(uVar4,param_2,&local_118,1,&local_58,&local_100);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_148,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f0;
  return param_3;
}

