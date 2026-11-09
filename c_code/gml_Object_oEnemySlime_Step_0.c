// gml_Object_oEnemySlime_Step_0 @ 0x140a7b1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Object_oEnemySlime_Step_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  double dVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  code *pcVar10;
  ulonglong in_stack_fffffffffffffed0;
  undefined8 **ppuVar11;
  ulonglong uVar12;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  uint local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_b0 = "gml_Script_anon@4642@___struct___534@gml_Object_oEnemySlime_Create_0";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x110;
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_e8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_7c = 0xffffff;
  local_88 = 0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x113;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar7 = (ulonglong)pcVar10 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_141a0a848,0x80000000,&local_58,uVar7,
                in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  uVar9 = (undefined4)(uVar7 >> 0x20);
  local_118 = CONCAT44(uRam0000000141dc6fc4,_DAT_141dc6fc0);
  uStack_110 = uRam0000000141dc6fc8;
  uStack_10c = uRam0000000141dc6fcc;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_118);
  local_a0 = &local_e8;
  ppuVar11 = &local_a0;
  uVar7 = CONCAT44(uVar9,DAT_141a0a0d8);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_128,1,uVar7,ppuVar11);
  uStack_fc = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_100 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_108 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_108,puVar6);
  }
  uStack_10c = 7;
  local_118 = CONCAT44(local_118._4_4_,4);
  FUN_140042560(&local_108,&local_118);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  uVar3 = FUN_140e851f0(&local_58,&local_108,DAT_141955260,1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (uVar3 < 0x80000000) {
    local_a8 = 0x115;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0;
    local_a8 = 0x116;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar5,DAT_141a55540,0x80000000,&local_68,uVar7 & 0xffffffffffffff00,
                  (ulonglong)ppuVar11 & 0xffffffffffffff00);
    local_118 = CONCAT44(uRam0000000141dd8f8c,_DAT_141dd8f88);
    uStack_110 = uRam0000000141dd8f90;
    uStack_10c = DAT_141dd8f94;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_118);
    local_a0 = &local_e8;
    uVar5 = FUN_140069500(uVar5);
    FUN_140e63610(uVar5,param_2,&local_128,1,&local_68,&local_a0);
    local_a8 = 0x117;
    goto LAB_140a7c033;
  }
  local_a8 = 0x11a;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419f1f08,0x80000000,&local_48,uVar7,
                (ulonglong)ppuVar11 & 0xffffffffffffff00);
  uVar9 = (undefined4)(uVar7 >> 0x20);
  cVar2 = FUN_140e491e0(&local_48);
  if (cVar2 == '\0') {
    local_a8 = 0x11c;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
    local_a8 = 0x11d;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
    local_a8 = 0x11e;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd588);
    local_118 = CONCAT44(uRam00000001419eb0d4,_DAT_1419eb0d0);
    uStack_110 = uRam00000001419eb0d8;
    uStack_10c = uRam00000001419eb0dc;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_118);
    local_a0 = &local_e8;
    local_118 = CONCAT44(uRam00000001419eb0d4,_DAT_1419eb0d0);
    uStack_110 = uRam00000001419eb0d8;
    uStack_10c = uRam00000001419eb0dc;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_118);
    local_98 = local_d8;
    local_118 = CONCAT44(uRam00000001419eb084,_DAT_1419eb080);
    uStack_110 = uRam00000001419eb088;
    uStack_10c = uRam00000001419eb08c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_118);
    local_90 = local_c8;
    ppuVar11 = &local_a0;
    FUN_140e63610(param_1,param_2,&local_128,3,uVar7,ppuVar11);
    local_a8 = 0x120;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_141a0a848,0x80000000,&local_58,uVar7,
                  (ulonglong)ppuVar11 & 0xffffffffffffff00);
    uVar9 = (undefined4)(uVar7 >> 0x20);
    local_118 = CONCAT44(uRam0000000141dc6fc4,_DAT_141dc6fc0);
    uStack_110 = uRam0000000141dc6fc8;
    uStack_10c = uRam0000000141dc6fcc;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_118);
    local_a0 = &local_e8;
    puVar6 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_128,1,CONCAT44(uVar9,DAT_141a0a0d8),&local_a0);
    uStack_fc = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_100 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
      local_108 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_108,puVar6);
    }
    uStack_10c = 0;
    local_118 = 0x3fdccccccccccccd;
    FUN_140042560(&local_108,&local_118);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    uVar3 = FUN_140e851f0(&local_58,&local_108,DAT_141955260,1);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if (uVar3 < 0x80000000) {
      local_a8 = 0x121;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      local_118 = 0x3ff0000000000000;
      uStack_10c = 0xd;
      local_108 = 0x3ff0000000000000;
      uStack_100 = uStack_110;
      uStack_fc = 0xd;
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_108);
      FUN_140e87930(uVar5,DAT_1419f1f08,0x80000000,&local_78);
    }
  }
  else {
    local_a8 = 0x125;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
    uStack_fc = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_100 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
      local_108 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_108,puVar6);
    }
    FUN_140042560(&local_108,puVar4);
    FUN_1400460e0(uVar5,&local_108);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_a8 = 0x126;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
    if (puVar6 != &local_e8) {
      local_118 = *puVar6;
      uStack_110 = *(undefined4 *)(puVar6 + 1);
      uStack_10c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_118);
    }
    local_a0 = &local_e8;
    local_118 = CONCAT44(uRam0000000141dc6fc4,_DAT_141dc6fc0);
    uStack_110 = uRam0000000141dc6fc8;
    uStack_10c = uRam0000000141dc6fcc;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_118);
    local_98 = local_d8;
    uStack_fc = 0;
    local_108 = 0x3fc999999999999a;
    FUN_140042560(&local_108,puVar4);
    local_118 = local_108;
    uStack_110 = uStack_100;
    uStack_10c = uStack_fc;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_118);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_90 = local_c8;
    FUN_140e609c0(param_1);
    puVar6 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_128,3,CONCAT44(uVar9,DAT_141a00c58),&local_a0);
    if (puVar6 != puVar8) {
      local_118 = *puVar6;
      uStack_110 = *(undefined4 *)(puVar6 + 1);
      uStack_10c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_118);
    }
    FUN_140e60910(1);
    local_a8 = 0x127;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd588);
    local_118 = CONCAT44(uRam00000001419eb0d4,_DAT_1419eb0d0);
    uStack_110 = uRam00000001419eb0d8;
    uStack_10c = uRam00000001419eb0dc;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_118);
    local_a0 = &local_e8;
    local_118 = CONCAT44(uRam00000001419eb0d4,_DAT_1419eb0d0);
    uStack_110 = uRam00000001419eb0d8;
    uStack_10c = uRam00000001419eb0dc;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_118);
    local_98 = local_d8;
    local_118 = CONCAT44(uRam00000001419eb084,_DAT_1419eb080);
    uStack_110 = uRam00000001419eb088;
    uStack_10c = uRam00000001419eb08c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_118);
    local_90 = local_c8;
    FUN_140e63610(param_1,param_2,&local_128,3,uVar5,&local_a0);
    local_a8 = 0x129;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
    FUN_140e63610(param_1,param_2,&local_128,0,uVar5,0);
    local_a8 = 299;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff968);
    uVar12 = 0;
    uVar5 = FUN_140e63610(param_1,param_2,&local_128,0,uVar7,0);
    cVar2 = FUN_140e491e0(uVar5);
    if (cVar2 != '\0') {
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
      if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
        uVar9 = (undefined4)*puVar6;
      }
      else {
        uVar9 = FUN_140e4b060(puVar6);
      }
      dVar1 = (double)FUN_140e78d00(uVar9);
      if (dVar1 < 4.0) {
        local_a8 = 0x12d;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        *puVar4 = 0;
        local_a8 = 0x12e;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
        FUN_140e87440(uVar5,DAT_141a55540,0x80000000,&local_68,uVar7 & 0xffffffffffffff00,
                      uVar12 & 0xffffffffffffff00);
        local_118 = CONCAT44(uRam0000000141dd8f8c,_DAT_141dd8f88);
        uStack_110 = uRam0000000141dd8f90;
        uStack_10c = DAT_141dd8f94;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        FUN_140041b80(&local_e8,&local_118);
        local_a0 = &local_e8;
        uVar5 = FUN_140069500(uVar5);
        FUN_140e63610(uVar5,param_2,&local_128,1,&local_68,&local_a0);
        local_a8 = 0x12f;
        goto LAB_140a7c033;
      }
    }
  }
  local_a8 = 0x133;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_128,0,uVar5,0);
  local_a8 = 0x134;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
  uVar12 = 0;
  FUN_140e63610(param_1,param_2,&local_128,0,uVar7,0);
  local_a8 = 0x136;
  if (puVar4 != &local_88) {
    local_118 = *puVar4;
    uStack_110 = *(undefined4 *)(puVar4 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_118);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_88);
  local_a8 = 0x137;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar5,DAT_141a0a848,0x80000000,&local_f8,uVar7 & 0xffffffffffffff00,
                uVar12 & 0xffffffffffffff00);
  uVar3 = local_ec & 0xffffff;
  if (uVar3 == 0) {
LAB_140a7c00f:
    local_f8 = local_f8 + 1.0;
  }
  else {
    if (uVar3 == 1) {
      local_f8 = (double)FUN_140e4b060(&local_f8);
      local_ec = 0;
      goto LAB_140a7c00f;
    }
    if (uVar3 == 7) {
      local_f8 = (double)CONCAT44(local_f8._4_4_,local_f8._0_4_ + 1);
    }
    else if (uVar3 == 10) {
      local_f8 = (double)((longlong)local_f8 + 1);
    }
    else {
      if (uVar3 == 0xd) {
        local_ec = 0;
        goto LAB_140a7c00f;
      }
      FUN_140042910(&DAT_14172c3d8,&local_f8,&local_f8);
    }
  }
  FUN_140e87930(uVar5,DAT_141a0a848,0x80000000,&local_f8);
LAB_140a7c033:
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

