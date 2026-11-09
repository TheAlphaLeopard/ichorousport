// gml_Script____struct___412_anon_1042_gml_Object_oCageArm_Create_0 @ 0x1408789e0

undefined8 *
gml_Script____struct___412_anon_1042_gml_Object_oCageArm_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *local_res8;
  ulonglong uVar7;
  undefined4 **ppuVar8;
  ulonglong uVar9;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined4 local_68 [3];
  byte local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@427@gml_Object_oCageArm_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x24;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_6c = 0xffffff;
  local_78 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x25;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  if (puVar4 != local_68) {
    local_48 = *puVar4;
    uStack_44 = puVar4[1];
    uStack_40 = puVar4[2];
    uStack_3c = puVar4[3];
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_48);
  }
  local_res8 = local_68;
  ppuVar8 = &local_res8;
  uVar7 = CONCAT44(uVar3,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_88,1,uVar7,ppuVar8);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_28 = 0x25;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    *param_3 = 0;
    goto LAB_140878c47;
  }
  local_28 = 0x26;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_88 = 0;
  local_80 = 0;
  local_7c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_141a572d0,0x80000000,&local_78,uVar7,uVar9);
  FUN_140e87440(&local_78,DAT_1419f5878,0x80000000,&local_58,uVar7 & 0xffffffffffffff00,
                uVar9 & 0xffffffffffffff00);
  switch(local_6c) {
  default:
switchD_140878bc2_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_78;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_78 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140878bc2_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_78);
    uVar5 = FUN_140e87250(uVar3);
  }
  puVar6 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_88,0,&local_58,0);
  if (puVar6 != param_3) {
    local_48 = *(undefined4 *)puVar6;
    uStack_44 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_40 = *(undefined4 *)(puVar6 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_48);
  }
LAB_140878c47:
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

