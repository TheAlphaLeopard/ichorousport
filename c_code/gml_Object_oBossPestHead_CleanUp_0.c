// gml_Object_oBossPestHead_CleanUp_0 @ 0x1407b3290

void gml_Object_oBossPestHead_CleanUp_0(longlong *param_1,undefined8 **param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *local_res18;
  undefined4 uVar6;
  undefined8 **ppuVar7;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  uint local_ec;
  longlong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  byte local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_80 = "gml_Object_oBossPestHead_Step_0";
  local_78 = 0;
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(&local_98,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_44 = 0xffffff;
  local_50 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_78 = 3;
  plVar2 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  if (plVar2 != &local_98) {
    local_e8 = *plVar2;
    uStack_e0 = (undefined4)plVar2[1];
    uStack_dc = *(undefined4 *)((longlong)plVar2 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_e8);
  }
  local_res18 = &local_98;
  ppuVar7 = &local_res18;
  plVar2 = (longlong *)CONCAT44(uVar6,DAT_141a02ef8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_d8,1,plVar2,ppuVar7);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_78 = 5;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
    FUN_140e87440(uVar3,DAT_141a08f08,0x80000000,&local_50,(ulonglong)plVar2 & 0xffffffffffffff00,
                  (ulonglong)ppuVar7 & 0xffffffffffffff00);
    uVar3 = FUN_140069500(uVar3);
    plVar2 = (longlong *)FUN_140e63610(uVar3,param_2,&local_c8,0,&local_50,0);
    if (plVar2 != &local_f8) {
      local_e8 = *plVar2;
      uStack_e0 = (undefined4)plVar2[1];
      uStack_dc = *(undefined4 *)((longlong)plVar2 + 0xc);
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_e8);
    }
    local_78 = 6;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08cf8);
    plVar2 = param_1;
    ppuVar7 = param_2;
    FUN_140e87170(uVar3,DAT_1419fe0e8,0x80000000,&local_a8,param_1,param_2);
    FUN_140e87440(uVar3,DAT_1419f5ef8,0x80000000,&local_60,(ulonglong)plVar2 & 0xffffffffffffff00,
                  (ulonglong)ppuVar7 & 0xffffffffffffff00);
    FUN_140e609c0(param_1);
    plVar2 = (longlong *)0x0;
    if (((local_ec & 0xffffff) == 2) && (local_f8 != 0)) {
      if (*(int *)(local_f8 + 0x24) < 1) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      }
      else {
        plVar2 = *(longlong **)(local_f8 + 8);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar2 = &local_f8;
    }
    uStack_dc = *(undefined4 *)((longlong)plVar2 + 0xc);
    uStack_e0 = (int)plVar2[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar2 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_e8 = *plVar2;
    }
    else {
      FUN_1400419b0(&local_e8,plVar2);
    }
    FUN_140042560(&local_e8,&local_60);
    uStack_fc = local_9c;
    uStack_100 = local_a0;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
      local_108 = local_a8;
    }
    else {
      FUN_1400419b0(&local_108,&local_a8);
    }
    FUN_1400460e0(&local_108,&local_e8);
    if (&local_108 != puVar4) {
      local_38 = (undefined4)local_108;
      uStack_34 = local_108._4_4_;
      uStack_30 = uStack_100;
      uStack_2c = uStack_fc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_38);
    }
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    local_78 = 7;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08d88);
    plVar2 = param_1;
    ppuVar7 = param_2;
    FUN_140e87170(uVar3,DAT_1419fe158,0x80000000,&local_b8,param_1,param_2);
    FUN_140e609c0(param_1);
    plVar5 = (longlong *)0x0;
    if (((local_ec & 0xffffff) == 2) && (local_f8 != 0)) {
      if (*(int *)(local_f8 + 0x24) < 2) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      }
      else {
        plVar5 = (longlong *)(*(longlong *)(local_f8 + 8) + 0x10);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar5 = &local_f8;
    }
    uStack_fc = local_ac;
    uStack_100 = local_b0;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
      local_108 = local_b8;
    }
    else {
      FUN_1400419b0(&local_108,&local_b8);
    }
    FUN_1400460e0(&local_108,plVar5);
    if (&local_108 != puVar4) {
      local_38 = (undefined4)local_108;
      uStack_34 = local_108._4_4_;
      uStack_30 = uStack_100;
      uStack_2c = uStack_fc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_38);
    }
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140e60910(1);
  }
  local_78 = 0xb;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar3,DAT_141a0a968,0x80000000,&local_70,(ulonglong)plVar2 & 0xffffffffffffff00,
                (ulonglong)ppuVar7 & 0xffffffffffffff00);
  uVar3 = FUN_140069500(uVar3);
  FUN_140e63610(uVar3,param_2,&local_d8,0,&local_70,0);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return;
}

