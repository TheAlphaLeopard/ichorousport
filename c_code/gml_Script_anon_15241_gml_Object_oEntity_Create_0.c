// gml_Script_anon_15241_gml_Object_oEntity_Create_0 @ 0x140abb1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_15241_gml_Object_oEntity_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong in_stack_fffffffffffffef0;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  byte local_5c;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 *local_40;
  
  local_b0 = "gml_Script_anon@14061@gml_Object_oEntity_Create_0";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x290;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f2908);
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x291;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f27a8);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_a8 = 0x291;
    uVar5 = 0;
  }
  else {
    local_a8 = 0x292;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f27a8);
    uStack_fc = 0xd;
    local_108 = (longlong *)0x0;
    if (&local_108 != puVar4) {
      local_f8 = (longlong *)0x0;
      uStack_f0 = uStack_100;
      uStack_ec = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_f8);
    }
    local_a8 = 0x293;
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    uStack_ec = 6;
    uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
    local_f8 = param_1;
    FUN_140e87440(&local_f8,DAT_141a0a828,0x80000000,&local_c8,uVar7,
                  in_stack_fffffffffffffef0 & 0xffffffffffffff00);
    uVar5 = (undefined4)(uVar7 >> 0x20);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_108,gml_Script_anon_14215_gml_Object_oEntity_Create_0,0);
    if (&local_108 != puVar2) {
      local_f8 = local_108;
      uStack_f0 = uStack_100;
      uStack_ec = uStack_fc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_f8);
    }
    FUN_140e60910(1);
    if (puVar2 != &local_98) {
      local_f8 = (longlong *)*puVar2;
      uStack_f0 = *(undefined4 *)(puVar2 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_f8);
    }
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_58 = &local_98;
    local_108 = (longlong *)local_c8;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_108);
    local_50 = local_88;
    local_108 = (longlong *)CONCAT44(uRam0000000141dd919c,_DAT_141dd9198);
    uStack_100 = uRam0000000141dd91a0;
    uStack_fc = DAT_141dd91a4;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_108);
    local_48 = local_78;
    puVar2 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_e8,2,CONCAT44(uVar5,DAT_1419fd6d8),&local_58);
    if (puVar2 != &local_68) {
      local_108 = (longlong *)*puVar2;
      uStack_100 = *(undefined4 *)(puVar2 + 1);
      uStack_fc = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      FUN_140041b80(&local_68,&local_108);
    }
    local_40 = &local_68;
    gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
              (param_1,param_2,&local_d8,2,&local_48);
    uVar5 = local_cc;
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

