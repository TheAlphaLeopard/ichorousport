// gml_Script_anon_14061_gml_Object_oEntity_Create_0 @ 0x140abac20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_14061_gml_Object_oEntity_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong in_stack_ffffffffffffff00;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_88;
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  byte local_4c;
  undefined8 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  
  local_a0 = "gml_Script_anon@13914@gml_Object_oEntity_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x289;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_88,0x10,4,FUN_1400424d0,FUN_140041b30);
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f28c8);
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x28a;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f27a8);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_98 = 0x28b;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f27a8);
    uStack_ec = 0xd;
    local_f8 = (longlong *)0x3ff0000000000000;
    if (&local_f8 != puVar4) {
      local_e8 = (longlong *)0x3ff0000000000000;
      uStack_e0 = uStack_f0;
      uStack_dc = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_e8);
    }
    local_98 = 0x28c;
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uStack_dc = 6;
    uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
    local_e8 = param_1;
    FUN_140e87440(&local_e8,DAT_141a0a828,0x80000000,&local_b8,uVar7,
                  in_stack_ffffffffffffff00 & 0xffffffffffffff00);
    uVar5 = (undefined4)(uVar7 >> 0x20);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_f8,gml_Script____struct___564_anon_14061_gml_Object_oEntity_Create_0,0);
    if (&local_f8 != puVar2) {
      local_e8 = local_f8;
      uStack_e0 = uStack_f0;
      uStack_dc = uStack_ec;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_e8);
    }
    FUN_140e60910(1);
    if (puVar2 != &local_88) {
      local_e8 = (longlong *)*puVar2;
      uStack_e0 = *(undefined4 *)(puVar2 + 1);
      uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_e8);
    }
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_48 = &local_88;
    local_f8 = (longlong *)local_b8;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_f8);
    local_40 = local_78;
    local_f8 = (longlong *)CONCAT44(uRam0000000141dd915c,_DAT_141dd9158);
    uStack_f0 = uRam0000000141dd9160;
    uStack_ec = DAT_141dd9164;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_f8);
    local_38 = local_68;
    puVar2 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_d8,2,CONCAT44(uVar5,DAT_1419fd6d8),&local_48);
    if (puVar2 != &local_58) {
      local_f8 = (longlong *)*puVar2;
      uStack_f0 = *(undefined4 *)(puVar2 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_58);
      }
      FUN_140041b80(&local_58,&local_f8);
    }
    local_30 = &local_58;
    gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
              (param_1,param_2,&local_c8,2,&local_38);
    uVar5 = local_bc;
  }
  else {
    local_98 = 0x28a;
    uVar5 = 0;
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_88,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

