// gml_Script____struct___370_gml_Object_oBossRecreant_Create_0 @ 0x1407bfab0

undefined8 *
gml_Script____struct___370_gml_Object_oBossRecreant_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *local_res8;
  undefined1 **ppuVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong in_stack_ffffffffffffff00;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_c0 = "gml_Script_anon@3810@___struct___370@gml_Object_oBossRecreant_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0xb0;
  _eh_vector_constructor_iterator_(local_d8,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_3c = 0xffffff;
  local_48 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0xb1;
  uStack_dc = 0xf;
  local_e8 = (longlong *)0x10000010000027b;
  local_68 = 0x27b;
  uStack_64 = 0x1000001;
  uStack_60 = uStack_e0;
  uStack_5c = 0xf;
  FUN_140041b80(&local_48,&local_68);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_48);
  local_b8 = 0xb2;
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  local_74 = 0;
  local_80 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_80);
  local_b8 = 0xb3;
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  local_84 = 0;
  local_90 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_90);
  local_b8 = 0xb5;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  local_94 = 0;
  local_a0 = 0;
  FUN_140e87930(uVar1,DAT_141a0a848,0x80000000,&local_a0);
  local_b8 = 0xb6;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uStack_dc = 0xf;
  local_e8 = (longlong *)0x100000000000149;
  local_68 = 0x149;
  uStack_64 = 0x1000000;
  uStack_60 = uStack_e0;
  uStack_5c = 0xf;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_68);
  local_res8 = local_d8;
  ppuVar3 = &local_res8;
  gml_GlobalScript_world_pos_to_gui(param_1,param_2,&local_f8,1,ppuVar3);
  local_b8 = 0xb7;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_b8 = 0xb8;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_b8 = 0xba;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uStack_dc = 6;
  uVar4 = (ulonglong)ppuVar3 & 0xffffffffffffff00;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_1419fe158,0x80000000,&local_58,uVar4,
                in_stack_ffffffffffffff00 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar4 >> 0x20);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_68 = (undefined4)local_58;
  uStack_64 = local_58._4_4_;
  uStack_60 = uStack_50;
  uStack_5c = uStack_4c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_68);
  local_res8 = local_d8;
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_f8,1,CONCAT44(uVar5,DAT_1419fd658),&local_res8);
  if (puVar2 != &local_b0) {
    local_68 = *(undefined4 *)puVar2;
    uStack_64 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_60 = *(undefined4 *)(puVar2 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    FUN_140041b80(&local_b0,&local_68);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_b0);
  local_b8 = 0xbb;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd5d8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

