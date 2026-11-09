// gml_Script_anon_61003____struct___692_gml_Object_oPlayer_Create_0 @ 0x140c51380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_61003____struct___692_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined1 **ppuVar9;
  undefined1 **ppuVar10;
  ulonglong in_stack_fffffffffffffe70;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  
  local_140 = "gml_Script_anon@60687@___struct___692@gml_Object_oPlayer_Create_0";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0xcab;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_118,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57ca0);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_16c = 0;
  local_178 = 0;
  local_124 = 0;
  local_130 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 0xcad;
  uStack_180 = CONCAT44(0xf,(undefined4)uStack_180);
  local_188 = 0x1000001000003f1;
  local_168 = 0x1000001000003f1;
  uStack_160 = CONCAT44(0xf,(undefined4)uStack_180);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_168);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_98);
  local_138 = 0xcaf;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_c8 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_c8);
  local_138 = 0xcb1;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffffffffff00;
  uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419f5868,0x80000000,&local_158,uVar8,in_stack_fffffffffffffe70);
  FUN_140e87440(&local_158,DAT_141a55540,0x80000000,&local_58,uVar8 & 0xffffffffffffff00,
                in_stack_fffffffffffffe70 & 0xffffffffffffff00);
  local_188 = CONCAT44(DAT_141dda848._4_4_,(undefined4)DAT_141dda848);
  uStack_180 = CONCAT44(DAT_141dda854,DAT_141dda850);
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_188);
  local_88 = local_118;
  switch(local_14c) {
  default:
switchD_140c51642_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_158;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_158 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140c51642_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_158);
    uVar5 = FUN_140e87250(uVar2);
  }
  FUN_140e63610(uVar5,param_2,&local_178,1,&local_58,&local_88);
  local_138 = 0xcb2;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0;
  local_138 = 0xcb3;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 0;
  local_d8 = 0;
  FUN_140e87930(uVar5,DAT_141a0a848,0x80000000,&local_d8);
  local_138 = 0xcb4;
  uStack_180 = CONCAT44(0xd,(undefined4)uStack_180);
  local_188 = 0;
  local_168 = 0;
  uStack_160 = uStack_180;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_168);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar5,DAT_1419f7f68,0x80000000,&local_a8);
  local_138 = 0xcb6;
  local_188 = 0x3ff0000000000000;
  uVar2 = (undefined4)uStack_180;
  uStack_180 = CONCAT44(0xd,uVar2);
  local_168 = 0x3ff0000000000000;
  uStack_160 = CONCAT44(0xd,uVar2);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_168);
  uStack_160._4_4_ = 0xf;
  local_168 = 0x100000000000106;
  FUN_140e87930(&local_168,DAT_1419fec58,0x80000000,&local_b8);
  if ((1 << ((byte)uStack_160._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_138 = 0xcb7;
  uStack_180 = CONCAT44(0xd,(undefined4)uStack_180);
  local_188 = 0;
  if (&local_188 != puVar3) {
    local_168 = 0;
    uStack_160._0_4_ = (undefined4)uStack_180;
    uStack_160._4_4_ = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_168);
  }
  local_138 = 0xcb9;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  local_188 = CONCAT44(uRam00000001419ecdb4,_DAT_1419ecdb0);
  uStack_180 = CONCAT44(uRam00000001419ecdbc,uRam00000001419ecdb8);
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_188);
  local_88 = local_118;
  local_188 = CONCAT44(uRam00000001419ecdb4,_DAT_1419ecdb0);
  uStack_180 = CONCAT44(uRam00000001419ecdbc,uRam00000001419ecdb8);
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_188);
  local_80 = local_108;
  ppuVar9 = &local_88;
  gml_Script_IK_documentation(param_1,param_2,&local_178,2,ppuVar9);
  uVar2 = (undefined4)((ulonglong)ppuVar9 >> 0x20);
  local_138 = 0xcba;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  local_130 = 0;
  local_128 = 0;
  local_124 = 5;
  local_188 = CONCAT44(uRam0000000141dc7474,_DAT_141dc7470);
  uStack_180 = CONCAT44(uRam0000000141dc747c,uRam0000000141dc7478);
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_188);
  local_88 = local_118;
  local_188 = CONCAT44(uRam00000001419ecbc4,_DAT_1419ecbc0);
  uStack_180 = CONCAT44(uRam00000001419ecbcc,uRam00000001419ecbc8);
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_188);
  local_80 = local_108;
  local_188 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_180 = CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_188);
  local_78 = local_f8;
  ppuVar9 = &local_88;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_130,1,CONCAT44(uVar2,DAT_141a0a0d8),ppuVar9);
  uStack_160 = puVar3[1];
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) == 0) {
    local_168 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_168,puVar3);
  }
  uStack_180._4_4_ = 7;
  local_188 = CONCAT44(local_188._4_4_,5);
  FUN_140042560(&local_168,&local_188);
  if ((1 << ((byte)uStack_180._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = local_168;
  uStack_180 = uStack_160;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_188);
  if ((1 << ((byte)((ulonglong)uStack_160 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_70 = local_e8;
  ppuVar10 = &local_80;
  gml_Script_bg_damage_flash(param_1,param_2,&local_178,3,ppuVar10);
  local_138 = 0xcbb;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  FUN_140e87440(uVar4,DAT_1419eef68,0x80000000,&local_68,(ulonglong)ppuVar10 & 0xffffffffffffff00,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  local_188 = local_68;
  uStack_180 = CONCAT44(uStack_5c,uStack_60);
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_188);
  local_88 = local_118;
  local_188 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_180 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_188);
  local_80 = local_108;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (param_1,param_2,&local_178,2,&local_88);
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_118,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
}

