// gml_Object_oBloodPortal_Destroy_0 @ 0x1406da760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBloodPortal_Destroy_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 **ppuVar10;
  ulonglong in_stack_fffffffffffffeb0;
  undefined8 local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  uint local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  
  local_f0 = "gml_Object_oBloodParticle_Step_0";
  local_e8 = 0;
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_64 = 0xffffff;
  local_70 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_e8 = 3;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdf18);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_e8 = 5;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    if (puVar5 != &local_128) {
      local_148 = (longlong *)*puVar5;
      uStack_140 = *(undefined4 *)(puVar5 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_148);
    }
    local_a8 = &local_128;
    local_148 = (longlong *)CONCAT44(uRam0000000141dc6884,_DAT_141dc6880);
    uStack_140 = uRam0000000141dc6888;
    uStack_13c = uRam0000000141dc688c;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_148);
    local_a0 = local_118;
    local_148 = (longlong *)CONCAT44(uRam00000001419e7914,_DAT_1419e7910);
    uStack_140 = uRam00000001419e7918;
    uStack_13c = uRam00000001419e791c;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_148);
    local_98 = local_108;
    FUN_140e609c0(param_1);
    ppuVar10 = &local_a8;
    puVar7 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_138,3,ppuVar10);
    if (puVar7 != puVar6) {
      local_148 = (longlong *)*puVar7;
      uStack_140 = *(undefined4 *)(puVar7 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_148);
    }
    FUN_140e60910(1);
    local_e8 = 6;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
    uStack_13c = 0;
    local_148 = (longlong *)0x0;
    iVar2 = FUN_140e851f0(uVar4,&local_148,DAT_141955260,0);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    if (iVar2 == 0) {
      local_e8 = 7;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_138 = 0;
      local_130 = 0;
      local_12c = 5;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
      if (puVar6 != &local_128) {
        local_148 = (longlong *)*puVar6;
        uStack_140 = *(undefined4 *)(puVar6 + 1);
        uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_148);
      }
      local_a8 = &local_128;
      local_148 = (longlong *)CONCAT44(uRam0000000141dc6884,_DAT_141dc6880);
      uStack_140 = uRam0000000141dc6888;
      uStack_13c = uRam0000000141dc688c;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_148);
      local_a0 = local_118;
      local_148 = (longlong *)CONCAT44(uRam00000001419e7914,_DAT_1419e7910);
      uStack_140 = uRam00000001419e7918;
      uStack_13c = uRam00000001419e791c;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_148);
      local_98 = local_108;
      FUN_140e609c0(param_1);
      ppuVar10 = &local_a8;
      puVar6 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_138,3,ppuVar10);
      if (puVar6 != puVar7) {
        local_148 = (longlong *)*puVar6;
        uStack_140 = *(undefined4 *)(puVar6 + 1);
        uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        FUN_140041b80(puVar7,&local_148);
      }
      FUN_140e60910(1);
    }
    else {
      local_e8 = 9;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
      uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
      uStack_140 = *(undefined4 *)(puVar6 + 1);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
        local_148 = (longlong *)*puVar6;
      }
      else {
        FUN_1400419b0(&local_148,puVar6);
      }
      FUN_140042560(&local_148,uVar3);
      FUN_1400460e0(uVar4,&local_148);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
    }
    local_e8 = 0xb;
    uStack_13c = 6;
    in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
    uVar9 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    local_148 = param_1;
    FUN_140e87440(&local_148,DAT_1419fe0e8,0x80000000,&local_70,uVar9,in_stack_fffffffffffffeb0);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_140 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
      local_148 = (longlong *)*puVar5;
    }
    else {
      FUN_1400419b0(&local_148,puVar5);
    }
    FUN_140042560(&local_148,uVar3);
    FUN_1400460e0(&local_70,&local_148);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_70);
    local_e8 = 0xc;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    uStack_13c = 6;
    in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    local_148 = param_1;
    FUN_140e87440(&local_148,DAT_1419fe158,0x80000000,&local_80,uVar9,in_stack_fffffffffffffeb0);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_140 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
      local_148 = (longlong *)*puVar5;
    }
    else {
      FUN_1400419b0(&local_148,puVar5);
    }
    FUN_140042560(&local_148,uVar3);
    FUN_1400460e0(&local_80,&local_148);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_80);
    local_e8 = 0xe;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f5a0);
    uStack_13c = 6;
    in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
    ppuVar10 = (undefined8 **)(uVar9 & 0xffffffffffffff00);
    local_148 = param_1;
    FUN_140e87440(&local_148,DAT_141a0f7f8,0x80000000,&local_c8,ppuVar10,in_stack_fffffffffffffeb0);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_140 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
      local_148 = (longlong *)*puVar5;
    }
    else {
      FUN_1400419b0(&local_148,puVar5);
    }
    FUN_140042560(&local_148,uVar3);
    FUN_1400462a0(&local_c8,&local_148);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_c8);
  }
  else {
    local_e8 = 0x12;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    if (puVar5 != &local_128) {
      local_148 = (longlong *)*puVar5;
      uStack_140 = *(undefined4 *)(puVar5 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_148);
    }
    local_a8 = &local_128;
    local_148 = (longlong *)CONCAT44(uRam0000000141dc6884,_DAT_141dc6880);
    uStack_140 = uRam0000000141dc6888;
    uStack_13c = uRam0000000141dc688c;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_148);
    local_a0 = local_118;
    local_148 = (longlong *)CONCAT44(uRam00000001419e7904,_DAT_1419e7900);
    uStack_140 = uRam00000001419e7908;
    uStack_13c = uRam00000001419e790c;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_148);
    local_98 = local_108;
    FUN_140e609c0(param_1);
    ppuVar10 = &local_a8;
    uVar9 = CONCAT44(uVar8,DAT_141a00c58);
    puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_138,3,uVar9,ppuVar10);
    if (puVar7 != puVar6) {
      local_148 = (longlong *)*puVar7;
      uStack_140 = *(undefined4 *)(puVar7 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_148);
    }
    FUN_140e60910(1);
    local_e8 = 0x13;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
    uStack_13c = 0;
    local_148 = (longlong *)0x0;
    iVar2 = FUN_140e851f0(uVar4,&local_148,DAT_141955260,0);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    if (iVar2 == 0) {
      local_e8 = 0x14;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      uVar8 = (undefined4)(uVar9 >> 0x20);
      local_138 = 0;
      local_130 = 0;
      local_12c = 5;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
      if (puVar6 != &local_128) {
        local_148 = (longlong *)*puVar6;
        uStack_140 = *(undefined4 *)(puVar6 + 1);
        uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_148);
      }
      local_a8 = &local_128;
      local_148 = (longlong *)CONCAT44(uRam0000000141dc6884,_DAT_141dc6880);
      uStack_140 = uRam0000000141dc6888;
      uStack_13c = uRam0000000141dc688c;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_148);
      local_a0 = local_118;
      local_148 = (longlong *)CONCAT44(uRam00000001419e7904,_DAT_1419e7900);
      uStack_140 = uRam00000001419e7908;
      uStack_13c = uRam00000001419e790c;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_148);
      local_98 = local_108;
      FUN_140e609c0(param_1);
      ppuVar10 = &local_a8;
      uVar9 = CONCAT44(uVar8,DAT_141a00c58);
      puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_138,3,uVar9,ppuVar10);
      if (puVar6 != puVar7) {
        local_148 = (longlong *)*puVar6;
        uStack_140 = *(undefined4 *)(puVar6 + 1);
        uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        FUN_140041b80(puVar7,&local_148);
      }
      FUN_140e60910(1);
    }
    else {
      local_e8 = 0x16;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
      uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
      uStack_140 = *(undefined4 *)(puVar6 + 1);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
        local_148 = (longlong *)*puVar6;
      }
      else {
        FUN_1400419b0(&local_148,puVar6);
      }
      FUN_140042560(&local_148,uVar3);
      FUN_1400460e0(uVar4,&local_148);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
    }
    local_e8 = 0x18;
    uStack_13c = 6;
    in_stack_fffffffffffffeb0 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    local_148 = param_1;
    FUN_140e87440(&local_148,DAT_1419fe0e8,0x80000000,&local_70,uVar9,in_stack_fffffffffffffeb0);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_1400460e0(&local_70,puVar5);
    FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_70);
    local_e8 = 0x19;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    uStack_13c = 6;
    in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    local_148 = param_1;
    FUN_140e87440(&local_148,DAT_1419fe158,0x80000000,&local_80,uVar9,in_stack_fffffffffffffeb0);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_1400460e0(&local_80,uVar3);
    FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_80);
    local_e8 = 0x1b;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f5a0);
    uStack_13c = 6;
    in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
    ppuVar10 = (undefined8 **)(uVar9 & 0xffffffffffffff00);
    local_148 = param_1;
    FUN_140e87440(&local_148,DAT_141a0f7f8,0x80000000,&local_c8,ppuVar10,in_stack_fffffffffffffeb0);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_1400462a0(&local_c8,uVar3);
    FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_c8);
  }
  local_e8 = 0x20;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdfe8);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    local_148 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_140 = DAT_1419df7b8;
    uStack_13c = DAT_1419df7bc;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
    local_a8 = &local_128;
    local_148 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_140 = DAT_1419df7b8;
    uStack_13c = DAT_1419df7bc;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_148);
    local_a0 = local_118;
    ppuVar10 = &local_a8;
    uVar3 = gml_Script_animcurve_lerp(param_1,param_2,&local_138,2,ppuVar10);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      local_e8 = 0x22;
      FUN_140edd0e0(param_1,param_2,0,0);
    }
  }
  local_e8 = 0x27;
  uStack_13c = 6;
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
  uVar9 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_141a0f7f8,0x80000000,&local_d8,uVar9,in_stack_fffffffffffffeb0);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = (longlong *)local_d8;
  uStack_140 = uStack_d0;
  uStack_13c = uStack_cc;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_148);
  FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_b8);
  local_e8 = 0x29;
  uStack_13c = 6;
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_141a0f7f8,0x80000000,&local_d8,uVar9,in_stack_fffffffffffffeb0);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((uStack_cc & 0xffffff) == 0) {
    uVar8 = (undefined4)local_d8;
    uVar3 = local_d8;
  }
  else {
    uVar3 = FUN_140e4b060(&local_d8);
    uVar8 = (undefined4)local_d8;
  }
  if ((uStack_cc & 0xffffff) != 0) {
    uVar8 = FUN_140e4b060(&local_d8);
  }
  uVar3 = FUN_140e78ec0(uVar8,0,uVar3);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_c8 = uVar3;
  FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_c8);
  local_e8 = 0x2a;
  uStack_13c = 6;
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_141a0f938,0x80000000,&local_90,uVar9,in_stack_fffffffffffffeb0);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((local_84 & 0xffffff) == 0) {
    uVar8 = (undefined4)local_90;
    uVar3 = local_90;
  }
  else {
    uVar3 = FUN_140e4b060(&local_90);
    uVar8 = (undefined4)local_90;
  }
  if ((local_84 & 0xffffff) != 0) {
    uVar8 = FUN_140e4b060(&local_90);
  }
  uVar3 = FUN_140e78ec0(uVar8,0,uVar3);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = uVar3;
  FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_b8);
  local_e8 = 0x2c;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1eea0);
  uStack_13c = 6;
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_141a0a778,0x80000000,&local_60,uVar9,in_stack_fffffffffffffeb0);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_1400460e0(&local_60,uVar3);
  FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_60);
  local_e8 = 0x2e;
  uStack_13c = 6;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_141a0f7f8,0x80000000,&local_d8,uVar9 & 0xffffffffffffff00,
                in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  uStack_13c = 0;
  local_148 = (longlong *)0x3fc999999999999a;
  iVar2 = FUN_140e851f0(&local_d8,&local_148,DAT_141955260,1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (iVar2 != -2 && iVar2 < 1) {
    local_e8 = 0x2f;
    FUN_140edd0e0(param_1,param_2,0,0);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return;
}

