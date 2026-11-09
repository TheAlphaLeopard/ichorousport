// gml_Object_oSignature_Create_0 @ 0x140d85a90

void gml_Object_oSignature_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  code *pcVar7;
  ulonglong uVar8;
  ulonglong in_stack_fffffffffffffec0;
  undefined4 **ppuVar9;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined4 *local_68;
  undefined8 *local_60;
  
  ppuVar9 = &local_68;
  local_100 = "gml_Object_oSidearmPedistal_Draw_64";
  local_f8 = 0;
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_88,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_e4 = 0xffffff;
  local_f0 = (undefined1 *)0x0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_f8 = 2;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b30);
  uStack_12c = 0;
  local_138 = &DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(uVar3,&local_138,DAT_141955260,0);
  bVar6 = iVar2 == 0;
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (!bVar6) {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
    in_stack_fffffffffffffec0 = CONCAT71((int7)(in_stack_fffffffffffffec0 >> 8),bVar6);
    pcVar7 = (code *)CONCAT71((int7)((ulonglong)pcVar7 >> 8),bVar6);
    FUN_140e87440(uVar3,DAT_1419eed18,0x80000000,&local_e0,pcVar7,in_stack_fffffffffffffec0);
    cVar1 = FUN_140e491e0(&local_e0);
    if (cVar1 != '\0') {
      local_f8 = 3;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff578);
      uStack_12c = 0xd;
      local_138 = (undefined1 *)0x3ff0000000000000;
      if (&local_138 != puVar4) {
        local_c8 = 0;
        uStack_c4 = 0x3ff00000;
        uStack_c0 = uStack_130;
        uStack_bc = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_c8);
      }
    }
  }
  local_f8 = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff578);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_f8 = 7;
    cVar1 = '\0';
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b30);
    uStack_12c = 0;
    local_138 = &DAT_bff0000000000000;
    iVar2 = FUN_140e851f0(uVar3,&local_138,DAT_141955260,0);
    bVar6 = iVar2 == 0;
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (!bVar6) {
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
      in_stack_fffffffffffffec0 = CONCAT71((int7)(in_stack_fffffffffffffec0 >> 8),bVar6);
      pcVar7 = (code *)CONCAT71((int7)((ulonglong)pcVar7 >> 8),bVar6);
      FUN_140e87440(uVar3,DAT_1419eed18,0x80000000,&local_e0,pcVar7,in_stack_fffffffffffffec0);
      cVar1 = FUN_140e491e0(&local_e0);
    }
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_10c = 0xd;
    if (cVar1 == '\0') {
      local_118 = 0;
    }
    else {
      local_118 = 0x3ff0000000000000;
    }
    local_f8 = 8;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b30);
    uStack_12c = 0;
    local_138 = &DAT_bff0000000000000;
    iVar2 = FUN_140e851f0(uVar3,&local_138,DAT_141955260,0);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (iVar2 != 0) {
      local_f8 = 9;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b30);
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff588);
      uStack_12c = 0xf;
      local_138 = (undefined1 *)0x100000000000106;
      in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
      uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
      FUN_140e87440(&local_138,DAT_1419f5998,0x80000000,&local_f0,uVar8,in_stack_fffffffffffffec0);
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140e87440(uVar3,DAT_141a0a908,0x80000000,&local_98,uVar8 & 0xffffffffffffff00,
                    in_stack_fffffffffffffec0 & 0xffffffffffffff00);
      FUN_140e609c0(param_1);
      uVar3 = FUN_140069500(uVar3);
      in_stack_fffffffffffffec0 = 0;
      pcVar7 = (code *)&local_98;
      uVar3 = FUN_140e63610(uVar3,param_2,&local_128,0,pcVar7,0);
      uStack_12c = local_e4;
      uStack_130 = local_e8;
      if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) == 0) {
        local_138 = local_f0;
      }
      else {
        FUN_1400419b0(&local_138,&local_f0);
      }
      FUN_1400462a0(&local_138,uVar3);
      if (&local_138 != puVar4) {
        local_c8 = (undefined4)local_138;
        uStack_c4 = local_138._4_4_;
        uStack_c0 = uStack_130;
        uStack_bc = uStack_12c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_c8);
      }
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140e60910(1);
    }
    local_f8 = 0xb;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff588);
    uStack_12c = 0xf;
    local_138 = (undefined1 *)0x100000000000147;
    FUN_140e87440(&local_138,DAT_1419ff648,0x80000000,&local_a8,
                  (ulonglong)pcVar7 & 0xffffffffffffff00,
                  in_stack_fffffffffffffec0 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (puVar5 != local_88) {
      local_c8 = *puVar5;
      uStack_c4 = puVar5[1];
      uStack_c0 = puVar5[2];
      uStack_bc = puVar5[3];
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_c8);
    }
    local_68 = local_88;
    local_60 = &local_118;
    uStack_12c = 0xf;
    local_138 = (undefined1 *)0x100000000000147;
    uVar3 = FUN_140069500(&local_138);
    puVar4 = &local_a8;
    FUN_140e63610(uVar3,param_2,&local_128,2,puVar4,ppuVar9);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_f8 = 0xd;
    cVar1 = FUN_140e491e0(&local_118);
    if (cVar1 == '\0') {
      uStack_12c = 0xf;
      local_138 = (undefined1 *)0x100000000000147;
      FUN_140e87440(&local_138,DAT_1419ff638,0x80000000,&local_b8,
                    (ulonglong)puVar4 & 0xffffffffffffff00,(ulonglong)ppuVar9 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      uStack_12c = 0;
      local_138 = (undefined1 *)0x0;
      iVar2 = FUN_140e851f0(&local_b8,&local_138,DAT_141955260,1);
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if (iVar2 != -2 && iVar2 < 1) {
        local_f8 = 0xe;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff578);
        uStack_12c = 0xd;
        local_138 = (undefined1 *)0x0;
        if (&local_138 != puVar4) {
          local_c8 = 0;
          uStack_c4 = 0;
          uStack_c0 = uStack_130;
          uStack_bc = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_c8);
        }
      }
    }
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return;
}

