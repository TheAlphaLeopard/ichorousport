// gml_Script_anon_7096_gml_Object_oPlayer_Other_10 @ 0x140c6a920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_anon_7096_gml_Object_oPlayer_Other_10
          (longlong *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 **ppuVar6;
  ulonglong in_stack_ffffffffffffff30;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined1 local_90 [12];
  byte local_84;
  undefined1 local_80 [12];
  byte local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_a0 = "gml_Script_anon@6552@gml_Object_oPlayer_Other_10";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x10d;
  _eh_vector_constructor_iterator_(local_90,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_64 = 0xffffff;
  local_70 = 0;
  local_bc = 0;
  uVar5 = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x10e;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f7b98);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_98 = 0x10f;
  }
  else {
    local_98 = 0x111;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    local_b8 = CONCAT44(uRam00000001419ecf84,_DAT_1419ecf80);
    uStack_b0 = uRam00000001419ecf88;
    uStack_ac = uRam00000001419ecf8c;
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_90);
    }
    FUN_140041b80(local_90,&local_b8);
    local_60 = local_90;
    local_b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_80);
    }
    FUN_140041b80(local_80,&local_b8);
    local_58 = local_80;
    ppuVar6 = &local_60;
    uVar3 = gml_Script_InputCheckMany(param_1,param_2,&local_c8,2,ppuVar6);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 == '\0') {
      local_98 = 0x113;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f7b98);
      uStack_ac = 0xd;
      local_b8 = 0;
      if (&local_b8 != puVar4) {
        local_48 = 0;
        uStack_44 = 0;
        uStack_40 = uStack_b0;
        uStack_3c = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_48);
      }
      local_98 = 0x115;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8388);
      uStack_ac = 0;
      local_b8 = 0x401c000000000000;
      uVar2 = FUN_140e851f0(uVar3,&local_b8,DAT_141955260,1);
      if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      if (uVar2 < 0x80000000) {
        local_98 = 0x117;
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        local_c8 = 0;
        local_c0 = 0;
        local_bc = 5;
        uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
        FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_70,
                      (ulonglong)ppuVar6 & 0xffffffffffffff00,
                      in_stack_ffffffffffffff30 & 0xffffffffffffff00);
        local_48 = _DAT_141ddaa18;
        uStack_44 = uRam0000000141ddaa1c;
        uStack_40 = uRam0000000141ddaa20;
        uStack_3c = DAT_141ddaa24;
        if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_90);
        }
        FUN_140041b80(local_90,&local_48);
        local_60 = local_90;
        uVar3 = FUN_140069500(uVar3);
        FUN_140e63610(uVar3,param_2,&local_c8,1,&local_70,&local_60);
        local_98 = 0x118;
        uVar5 = 0x3ff00000;
        goto LAB_140c6ac65;
      }
    }
    local_98 = 0x11c;
  }
LAB_140c6ac65:
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = (ulonglong)uVar5 << 0x20;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  _eh_vector_destructor_iterator_(local_90,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

