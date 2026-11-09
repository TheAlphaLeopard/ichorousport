// gml_Script_anon_201_gml_Object_oChestOption_Create_0 @ 0x1408a3930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_201_gml_Object_oChestOption_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong in_stack_fffffffffffffef0;
  undefined8 **ppuVar9;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  longlong *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined8 local_70;
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_34;
  
  local_a0 = "gml_Object_oChestGravePit_Create_0";
  local_98 = 0;
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_70,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = (longlong *)0x0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_34 = 0xffffff;
  local_40 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_44 = 0xffffff;
  local_50 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_98 = 3;
  FUN_140e98b30(param_1,param_2);
  local_98 = 5;
  puVar2 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a56b40);
  if (puVar2 != &DAT_141dd7548) {
    local_108 = (longlong *)CONCAT44(uRam0000000141dd754c,_DAT_141dd7548);
    uStack_100 = uRam0000000141dd7550;
    uStack_fc = DAT_141dd7554;
    if ((1 << ((byte)*(undefined4 *)(puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_108);
  }
  local_98 = 7;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56b90);
  uStack_dc = 6;
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_1419fe158,0x80000000,&local_b8,uVar7,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  uStack_dc = local_ac;
  uStack_e0 = local_b0;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
    local_e8 = local_b8;
  }
  else {
    FUN_1400419b0(&local_e8,&local_b8);
  }
  uStack_fc = 7;
  local_108 = (longlong *)CONCAT44(local_108._4_4_,0x20);
  FUN_1400462a0(&local_e8,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = local_e8;
  uStack_100 = uStack_e0;
  uStack_fc = uStack_dc;
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  FUN_140041b80(&local_90,&local_108);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140e86c30(uVar3,DAT_1419fe158,0x80000000,&local_90);
  local_98 = 9;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uStack_fc = 0xf;
  local_108 = (longlong *)0x1000000000000ff;
  local_e8 = (longlong *)0x1000000000000ff;
  uStack_e0 = uStack_100;
  uStack_dc = 0xf;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  FUN_140041b80(&local_70,&local_e8);
  local_80 = &local_70;
  ppuVar9 = &local_80;
  uVar7 = CONCAT44(uVar8,DAT_141a02ef8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_f8,1,uVar7,ppuVar9);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_98 = 0xb;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uStack_fc = 0xf;
    local_108 = (longlong *)0x1000000000000ff;
    FUN_140e87440(&local_108,DAT_141a56b50,0x80000000,&local_40,uVar7 & 0xffffffffffffff00,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    uStack_fc = 0xf;
    local_108 = (longlong *)0x1000000000000ff;
    uVar3 = FUN_140069500(&local_108);
    puVar5 = &local_40;
    puVar4 = (undefined8 *)FUN_140e63610(uVar3,param_2,&local_d8,0,puVar5,0);
    uVar8 = (undefined4)((ulonglong)puVar5 >> 0x20);
    if (puVar4 != &local_c8) {
      local_e8 = (longlong *)*puVar4;
      uStack_e0 = *(undefined4 *)(puVar4 + 1);
      uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_e8);
    }
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_98 = 0xc;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    local_80 = &local_c8;
    ppuVar9 = &local_80;
    uVar7 = CONCAT44(uVar8,DAT_1419fcb88);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_f8,1,uVar7,ppuVar9);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      FUN_140e87440(&local_c8,DAT_141a56b30,0x80000000,&local_50,uVar7 & 0xffffffffffffff00,
                    (ulonglong)ppuVar9 & 0xffffffffffffff00);
      cVar1 = FUN_140e491e0(&local_50);
      if (cVar1 != '\0') {
        local_98 = 0xe;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a56b60);
        uStack_fc = 0xd;
        local_108 = (longlong *)0x3ff0000000000000;
        if (&local_108 != puVar5) {
          local_e8 = (longlong *)0x3ff0000000000000;
          uStack_e0 = uStack_100;
          uStack_dc = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_e8);
        }
        local_98 = 0xf;
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        local_f8 = 0;
        local_f0 = 0;
        local_ec = 5;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a918);
        local_108 = (longlong *)CONCAT44(uRam00000001419e9544,_DAT_1419e9540);
        uStack_100 = uRam00000001419e9548;
        uStack_fc = uRam00000001419e954c;
        if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_70);
        }
        FUN_140041b80(&local_70,&local_108);
        local_80 = &local_70;
        local_108 = (longlong *)CONCAT44(uRam00000001419e9554,_DAT_1419e9550);
        uStack_100 = uRam00000001419e9558;
        uStack_fc = uRam00000001419e955c;
        if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_60);
        }
        FUN_140041b80(local_60,&local_108);
        local_78 = local_60;
        FUN_140e609c0(param_1);
        puVar4 = (undefined8 *)FUN_140e78db0(&local_f8,2,&local_80);
        if (puVar4 != puVar5) {
          local_108 = (longlong *)*puVar4;
          uStack_100 = *(undefined4 *)(puVar4 + 1);
          uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_108);
        }
        FUN_140e60910(1);
      }
    }
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_40);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_70,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return;
}

