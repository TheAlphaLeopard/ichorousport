// gml_Object_oShopRaven_Create_0 @ 0x140d72660

void gml_Object_oShopRaven_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  bool bVar5;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong in_stack_fffffffffffffeb0;
  undefined8 **ppuVar8;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 *local_68;
  undefined8 *local_60;
  
  local_100 = "gml_Object_oShopPedistal_Draw_64";
  local_f8 = 0;
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_88,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = (undefined1 *)0x0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_f8 = 2;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b30);
  uStack_12c = 0;
  local_138 = &DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(uVar3,&local_138,DAT_141955260,0);
  bVar5 = iVar2 == 0;
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (!bVar5) {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
    in_stack_fffffffffffffeb0 = CONCAT71((int7)(in_stack_fffffffffffffeb0 >> 8),bVar5);
    pcVar6 = (code *)CONCAT71((int7)((ulonglong)pcVar6 >> 8),bVar5);
    FUN_140e87440(uVar3,DAT_1419eed18,0x80000000,&local_b8,pcVar6,in_stack_fffffffffffffeb0);
    cVar1 = FUN_140e491e0(&local_b8);
    if (cVar1 != '\0') {
      local_f8 = 3;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff578);
      uStack_13c = 0xd;
      local_148 = 0x3ff0000000000000;
      if (&local_148 != puVar4) {
        local_138 = (undefined1 *)0x3ff0000000000000;
        uStack_130 = uStack_140;
        uStack_12c = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_138);
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
    bVar5 = iVar2 == 0;
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (!bVar5) {
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
      in_stack_fffffffffffffeb0 = CONCAT71((int7)(in_stack_fffffffffffffeb0 >> 8),bVar5);
      pcVar6 = (code *)CONCAT71((int7)((ulonglong)pcVar6 >> 8),bVar5);
      FUN_140e87440(uVar3,DAT_1419eed18,0x80000000,&local_b8,pcVar6,in_stack_fffffffffffffeb0);
      cVar1 = FUN_140e491e0(&local_b8);
    }
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_11c = 0xd;
    if (cVar1 == '\0') {
      local_128 = 0;
    }
    else {
      local_128 = 0x3ff0000000000000;
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
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b30);
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff588);
      uStack_12c = 0xf;
      local_138 = (undefined1 *)0x100000000000106;
      in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
      uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
      FUN_140e87440(&local_138,DAT_1419f5998,0x80000000,&local_c8,uVar7,in_stack_fffffffffffffeb0);
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
      pcVar6 = (code *)(uVar7 & 0xffffffffffffff00);
      FUN_140e87440(uVar3,DAT_141a0a918,0x80000000,&local_d8,pcVar6,in_stack_fffffffffffffeb0);
      FUN_140e609c0(param_1);
      uStack_12c = local_cc;
      uStack_130 = local_d0;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
        local_138 = local_d8;
      }
      else {
        FUN_1400419b0(&local_138,&local_d8);
      }
      uStack_13c = 7;
      local_148 = CONCAT44(local_148._4_4_,1);
      FUN_1400460e0(&local_138,&local_148);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      uStack_dc = local_bc;
      uStack_e0 = local_c0;
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
        local_e8 = local_c8;
      }
      else {
        FUN_1400419b0(&local_e8,&local_c8);
      }
      FUN_1400462a0(&local_e8,&local_138);
      if (&local_e8 != puVar4) {
        local_148 = local_e8;
        uStack_140 = uStack_e0;
        uStack_13c = uStack_dc;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_148);
      }
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140e60910(1);
    }
    local_f8 = 0xb;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff588);
    uStack_13c = 0xf;
    local_148 = 0x100000000000147;
    FUN_140e87440(&local_148,DAT_1419ff648,0x80000000,&local_98,
                  (ulonglong)pcVar6 & 0xffffffffffffff00,
                  in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    if (puVar4 != &local_88) {
      local_148 = *puVar4;
      uStack_140 = *(undefined4 *)(puVar4 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_148);
    }
    local_68 = &local_88;
    local_60 = &local_128;
    uStack_13c = 0xf;
    local_148 = 0x100000000000147;
    uVar3 = FUN_140069500(&local_148);
    ppuVar8 = &local_68;
    puVar4 = &local_98;
    FUN_140e63610(uVar3,param_2,&local_118,2,puVar4,ppuVar8);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_f8 = 0xd;
    cVar1 = FUN_140e491e0(&local_128);
    if (cVar1 == '\0') {
      uStack_13c = 0xf;
      local_148 = 0x100000000000147;
      FUN_140e87440(&local_148,DAT_1419ff638,0x80000000,&local_a8,
                    (ulonglong)puVar4 & 0xffffffffffffff00,(ulonglong)ppuVar8 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      uStack_13c = 0;
      local_148 = 0;
      iVar2 = FUN_140e851f0(&local_a8,&local_148,DAT_141955260,1);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if (iVar2 != -2 && iVar2 < 1) {
        local_f8 = 0xe;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff578);
        uStack_13c = 0xd;
        local_148 = 0;
        if (&local_148 != puVar4) {
          local_138 = (undefined1 *)0x0;
          uStack_130 = uStack_140;
          uStack_12c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_138);
        }
      }
    }
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_88,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return;
}

