// gml_Script____struct___810_gml_Object_oTitleScreen_Create_0 @ 0x140dbc0d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___810_gml_Object_oTitleScreen_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong in_stack_fffffffffffffed0;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_c0 = "gml_Script_anon@951@___struct___811@___struct___810@gml_Object_oTitleScreen_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x2e;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef418);
  local_10c = 0xffffff;
  local_118 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_11c = 0;
  local_128 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x2f;
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffffffffffff00;
  uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419ef058,0x80000000,&local_118,uVar6,in_stack_fffffffffffffed0);
  FUN_140e87440(&local_118,DAT_1419f4a98,0x80000000,&local_e8,uVar6 & 0xffffffffffffff00,
                in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  switch(local_10c) {
  default:
switchD_140dbc208_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_118;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_118 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140dbc208_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_118);
    uVar4 = FUN_140e87250(uVar3);
  }
  puVar7 = &local_e8;
  FUN_140e63610(uVar4,param_2,&local_128,0,puVar7,0);
  uVar3 = (undefined4)((ulonglong)puVar7 >> 0x20);
  local_b8 = 0x30;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uStack_cc = 0xf;
  local_d8 = 0x1000000000000ca;
  local_f8 = 0xca;
  uStack_f4 = 0x1000000;
  uStack_f0 = uStack_d0;
  uStack_ec = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_f8);
  local_58 = local_a8;
  uVar8 = CONCAT44(uVar3,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar8,&local_58);
  uVar3 = (undefined4)((ulonglong)uVar8 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_b8 = 0x31;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    local_f8 = _DAT_141dc7830;
    uStack_f4 = uRam0000000141dc7834;
    uStack_f0 = uRam0000000141dc7838;
    uStack_ec = uRam0000000141dc783c;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_f8);
    local_50 = local_98;
    local_f8 = _DAT_141dc7830;
    uStack_f4 = uRam0000000141dc7834;
    uStack_f0 = uRam0000000141dc7838;
    uStack_ec = uRam0000000141dc783c;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_f8);
    local_48 = local_88;
    local_f8 = _DAT_1419ee120;
    uStack_f4 = uRam00000001419ee124;
    uStack_f0 = uRam00000001419ee128;
    uStack_ec = uRam00000001419ee12c;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_f8);
    local_40 = local_78;
    uStack_cc = 0xf;
    local_d8 = 0x1000000000000ca;
    local_f8 = 0xca;
    uStack_f4 = 0x1000000;
    uStack_f0 = uStack_d0;
    uStack_ec = 0xf;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_f8);
    local_38 = local_68;
    FUN_140e634e0(param_1,param_2,&local_108,4,CONCAT44(uVar3,DAT_141a02e88),&local_50);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

