// gml_Script____struct___187_settings_setup_PauseMenuFunctions @ 0x1404230d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___187_settings_setup_PauseMenuFunctions
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong in_stack_fffffffffffffec0;
  ulonglong uVar7;
  undefined1 **ppuVar8;
  longlong *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  longlong *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_60 = 
  "gml_Script_anon@5921@___struct___188@___struct___187@settings_setup@PauseMenuFunctions";
  local_68 = DAT_141dc7a50;
  local_58 = 0xfe;
  pcVar4 = FUN_140041b30;
  DAT_141dc7a50 = &local_68;
  _eh_vector_constructor_iterator_(local_a8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef418);
  local_fc = 0xffffff;
  local_108 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_ec = 0xffffff;
  local_f8 = (longlong *)0x0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0xff;
  in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
  uVar7 = (ulonglong)pcVar4 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419ef058,0x80000000,&local_108,uVar7,in_stack_fffffffffffffec0);
  FUN_140e87440(&local_108,DAT_1419f4a98,0x80000000,&local_b8,uVar7 & 0xffffffffffffff00,
                in_stack_fffffffffffffec0 & 0xffffffffffffff00);
  switch(local_fc) {
  default:
switchD_140423225_caseD_1:
    uVar3 = 0;
    break;
  case 6:
    uVar3 = local_108;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_108 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140423225_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_108);
    uVar3 = FUN_140e87250(uVar2);
  }
  uVar7 = 0;
  puVar5 = &local_b8;
  FUN_140e63610(uVar3,param_2,&local_128,0,puVar5,0);
  local_58 = 0x100;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uStack_12c = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  uVar6 = (ulonglong)puVar5 & 0xffffffffffffff00;
  local_138 = param_1;
  FUN_140e87440(&local_138,DAT_1419fe0e8,0x80000000,&local_c8,uVar6,uVar7);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  uStack_12c = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_138 = param_1;
  FUN_140e87440(&local_138,DAT_1419fe158,0x80000000,&local_d8,uVar6,uVar7);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  uStack_12c = 6;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_138 = param_1;
  FUN_140e87440(&local_138,DAT_141a02ee8,0x80000000,&local_f8,uVar6,uVar7 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar6 >> 0x20);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_118 = (longlong *)local_c8;
  uStack_110 = uStack_c0;
  uStack_10c = uStack_bc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_118);
  local_50 = local_a8;
  local_118 = (longlong *)local_d8;
  uStack_110 = uStack_d0;
  uStack_10c = uStack_cc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_118);
  local_48 = local_98;
  uStack_12c = local_ec;
  uStack_130 = local_f0;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
    local_138 = local_f8;
  }
  else {
    FUN_1400419b0(&local_138,&local_f8);
  }
  uStack_10c = 7;
  local_118 = (longlong *)CONCAT44(local_118._4_4_,10);
  FUN_1400462a0(&local_138,&local_118);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = local_138;
  uStack_110 = uStack_130;
  uStack_10c = uStack_12c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_118);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_40 = local_88;
  uStack_10c = 0xf;
  local_118 = (longlong *)0x1000000000000c0;
  local_138 = (longlong *)0x1000000000000c0;
  uStack_130 = uStack_110;
  uStack_12c = 0xf;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_138);
  local_38 = local_78;
  ppuVar8 = &local_50;
  uVar7 = CONCAT44(uVar2,DAT_141a02e88);
  FUN_140e634e0(param_1,param_2,&local_128,4,uVar7,ppuVar8);
  local_58 = 0x101;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a55440);
  FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_e8,uVar7 & 0xffffffffffffff00,
                (ulonglong)ppuVar8 & 0xffffffffffffff00);
  local_118 = (longlong *)CONCAT44(uRam0000000141dd2b5c,_DAT_141dd2b58);
  uStack_110 = uRam0000000141dd2b60;
  uStack_10c = DAT_141dd2b64;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_118);
  local_50 = local_a8;
  uVar3 = FUN_140069500(uVar3);
  FUN_140e63610(uVar3,param_2,&local_128,1,&local_e8,&local_50);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

