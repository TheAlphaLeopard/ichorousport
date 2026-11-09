// gml_Script____struct___526_gml_Object_oEnemySkele_Create_0 @ 0x140a65790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___526_gml_Object_oEnemySkele_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 uVar9;
  undefined8 **ppuVar8;
  undefined8 **ppuVar10;
  ulonglong uVar11;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 *local_a0;
  undefined8 *local_98;
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
  
  local_c0 = "gml_Script_anon@2820@___struct___526@gml_Object_oEnemySkele_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x6d;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_f8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_12c = 0;
  local_138 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x6e;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar4 != &local_f8) {
    local_128 = (longlong *)*puVar4;
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_128);
  }
  local_a0 = &local_f8;
  ppuVar10 = &local_a0;
  uVar5 = FUN_140e634e0(param_1,param_2,&local_138,1,CONCAT44(uVar9,DAT_141a02ef8),ppuVar10);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_b8 = 0x6f;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
    FUN_140e609c0(param_1);
    puVar6 = (undefined8 *)gml_Script_FracPos(param_1,param_2,&local_118,0,0);
    if (puVar6 != puVar4) {
      local_128 = (longlong *)*puVar6;
      uStack_120 = *(undefined4 *)(puVar6 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_128);
    }
    FUN_140e60910(1);
  }
  local_b8 = 0x71;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_100 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_108 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_108,puVar4);
  }
  FUN_140042560(&local_108,uVar3);
  FUN_1400460e0(uVar5,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_b8 = 0x73;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if (puVar4 != &local_f8) {
    local_128 = (longlong *)*puVar4;
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_128);
  }
  local_a0 = &local_f8;
  local_128 = (longlong *)CONCAT44(uRam0000000141dc6fa4,_DAT_141dc6fa0);
  uStack_120 = uRam0000000141dc6fa8;
  uStack_11c = uRam0000000141dc6fac;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_128);
  local_98 = &local_e8;
  local_128 = (longlong *)CONCAT44(uRam00000001419eaf64,_DAT_1419eaf60);
  uStack_120 = uRam00000001419eaf68;
  uStack_11c = uRam00000001419eaf6c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  local_90 = local_d8;
  FUN_140e609c0(param_1);
  ppuVar8 = &local_a0;
  puVar4 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_138,3,ppuVar8);
  if (puVar4 != puVar6) {
    local_128 = (longlong *)*puVar4;
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_128);
  }
  FUN_140e60910(1);
  local_b8 = 0x75;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar7 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_141a0a848,0x80000000,&local_48,uVar7,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  uVar9 = (undefined4)(uVar7 >> 0x20);
  local_128 = (longlong *)CONCAT44(uRam0000000141dc6fa4,_DAT_141dc6fa0);
  uStack_120 = uRam0000000141dc6fa8;
  uStack_11c = uRam0000000141dc6fac;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_128);
  local_a0 = &local_f8;
  ppuVar10 = &local_a0;
  uVar5 = CONCAT44(uVar9,DAT_141a0a0d8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_138,1,uVar5,ppuVar10);
  uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_100 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_108 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_108,puVar4);
  }
  uStack_11c = 7;
  local_128 = (longlong *)CONCAT44(local_128._4_4_,2);
  FUN_140042560(&local_108,&local_128);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  iVar2 = FUN_140e851f0(&local_48,&local_108,DAT_141955260,1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (0 < iVar2) {
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    if (puVar4 != &local_e8) {
      local_128 = (longlong *)*puVar4;
      uStack_120 = *(undefined4 *)(puVar4 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_128);
    }
    local_98 = &local_e8;
    ppuVar10 = &local_98;
    uVar7 = CONCAT44(uVar9,DAT_141a02ef8);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_118,1,uVar7,ppuVar10);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 != '\0') {
      uStack_11c = 6;
      ppuVar10 = (undefined8 **)((ulonglong)ppuVar10 & 0xffffffffffffff00);
      local_128 = param_1;
      FUN_140e87440(&local_128,DAT_141a0a728,0x80000000,&local_58,uVar7 & 0xffffffffffffff00,
                    ppuVar10);
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      uStack_11c = 0xf;
      local_128 = (longlong *)0x1000001000002c2;
      iVar2 = FUN_140e851f0(&local_58,&local_128,DAT_141955260,0);
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if (iVar2 != 0) {
        local_b8 = 0x77;
        uStack_11c = 0xf;
        local_128 = (longlong *)0x1000001000002c2;
        local_108 = 0x1000001000002c2;
        uStack_100 = uStack_120;
        uStack_fc = 0xf;
        if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_78);
        }
        FUN_140041b80(&local_78,&local_108);
        FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_78);
        local_b8 = 0x78;
        if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        local_7c = 0;
        local_88 = 0;
        FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_88);
      }
    }
  }
  local_b8 = 0x7b;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uStack_11c = 0xf;
  local_128 = (longlong *)0x1000001000002c2;
  local_108 = 0x1000001000002c2;
  uStack_100 = uStack_120;
  uStack_fc = 0xf;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_108);
  local_a0 = &local_f8;
  local_128 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_120 = DAT_1419df7b8;
  uStack_11c = DAT_1419df7bc;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_128);
  local_98 = &local_e8;
  ppuVar8 = &local_a0;
  uVar5 = gml_Script_animcurve_lerp(param_1,param_2,&local_138,2,ppuVar8);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_b8 = 0x83;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
    FUN_140e63610(param_1,param_2,&local_138,0,uVar5,0);
    local_b8 = 0x84;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
    FUN_140e63610(param_1,param_2,&local_138,0,uVar5,0);
    local_b8 = 0x85;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
    uVar11 = 0;
    FUN_140e63610(param_1,param_2,&local_138,0,uVar7,0);
    local_b8 = 0x86;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    FUN_140e87440(uVar5,DAT_141a0a848,0x80000000,&local_b0,uVar7 & 0xffffffffffffff00,
                  uVar11 & 0xffffffffffffff00);
    FUN_1400460e0(&local_b0,uVar3);
    FUN_140e87930(uVar5,DAT_141a0a848,0x80000000,&local_b0);
  }
  else {
    local_b8 = 0x7d;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_68,(ulonglong)ppuVar8 & 0xffffffffffffff00,
                  (ulonglong)ppuVar10 & 0xffffffffffffff00);
    local_128 = (longlong *)CONCAT44(uRam0000000141dd8ebc,_DAT_141dd8eb8);
    uStack_120 = uRam0000000141dd8ec0;
    uStack_11c = DAT_141dd8ec4;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_128);
    local_90 = local_d8;
    uVar3 = FUN_140069500(uVar3);
    FUN_140e63610(uVar3,param_2,&local_118,1,&local_68,&local_90);
    local_b8 = 0x7e;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    local_a4 = 0;
    local_b0 = 0;
    FUN_140e87930(uVar3,DAT_141a0a848,0x80000000,&local_b0);
    local_b8 = 0x7f;
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

