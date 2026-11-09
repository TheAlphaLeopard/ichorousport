// gml_Script____struct___792_gml_Object_oShopSalesman_Create_0 @ 0x140d7bd20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___792_gml_Object_oShopSalesman_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 **ppuVar9;
  undefined8 local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  uint local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined1 local_d0 [12];
  byte local_c4;
  undefined1 local_c0 [12];
  byte local_b4;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_e0 = "gml_Script_anon@2006@___struct___792@gml_Object_oShopSalesman_Create_0";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x54;
  _eh_vector_constructor_iterator_(local_d0,0x10,2,FUN_1400424d0,FUN_140041b30);
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  local_13c = 0xffffff;
  local_148 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_12c = 0;
  local_138 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x55;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff7c8);
  uVar8 = 0;
  FUN_140e63610(param_1,param_2,&local_138,0,uVar4,0);
  local_d8 = 0x57;
  cVar1 = FUN_140e491e0(puVar3);
  if (cVar1 == '\0') goto LAB_140d7c455;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uStack_14c = 0xf;
  local_158 = (longlong *)0x1000000000000ee;
  uVar8 = uVar8 & 0xffffffffffffff00;
  uVar4 = uVar4 & 0xffffffffffffff00;
  FUN_140e87440(&local_158,DAT_1419f5868,0x80000000,&local_148,uVar4,uVar8);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140e87440(&local_148,DAT_1419f5848,0x80000000,&local_70,uVar4 & 0xffffffffffffff00,
                uVar8 & 0xffffffffffffff00);
  local_158 = (longlong *)CONCAT44(uRam0000000141ddb7ac,_DAT_141ddb7a8);
  uStack_150 = uRam0000000141ddb7b0;
  uStack_14c = DAT_141ddb7b4;
  if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d0);
  }
  FUN_140041b80(local_d0,&local_158);
  local_b0 = local_d0;
  switch(local_13c) {
  default:
switchD_140d7bf83_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_148;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_148 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140d7bf83_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar6 = FUN_140e4a8b0(&local_148);
    uVar5 = FUN_140e87250(uVar6);
  }
  ppuVar9 = &local_b0;
  puVar7 = &local_70;
  uVar5 = FUN_140e63610(uVar5,param_2,&local_138,1,puVar7,ppuVar9);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') goto LAB_140d7c455;
  local_d8 = 0x58;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar5,DAT_141a55540,0x80000000,&local_80,(ulonglong)puVar7 & 0xffffffffffffff00,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  local_158 = (longlong *)CONCAT44(uRam0000000141ddb72c,_DAT_141ddb728);
  uStack_150 = uRam0000000141ddb730;
  uStack_14c = DAT_141ddb734;
  if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c0);
  }
  FUN_140041b80(local_c0,&local_158);
  local_a8 = local_c0;
  uVar5 = FUN_140069500(uVar5);
  ppuVar9 = &local_a8;
  puVar7 = &local_80;
  FUN_140e63610(uVar5,param_2,&local_128,1,puVar7,ppuVar9);
  local_d8 = 0x5a;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = 0;
  uStack_14c = 0xf;
  local_158 = (longlong *)0x1000000000000ee;
  FUN_140e87930(&local_158,DAT_141a1f230,0x80000000,&local_f8);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_d8 = 0x5b;
  uStack_14c = 6;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_108,
                (ulonglong)puVar7 & 0xffffffffffffff00,(ulonglong)ppuVar9 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_14c = 0xf;
  local_158 = (longlong *)0x1000000000000ee;
  uVar4 = param_2;
  FUN_140e87170(&local_158,DAT_1419fe0e8,0x80000000,&local_90,param_1,param_2);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_14c = local_fc;
  uStack_150 = local_100;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_158 = (longlong *)local_108;
  }
  else {
    FUN_1400419b0(&local_158,&local_108);
  }
  FUN_1400462a0(&local_158,&local_90);
  if ((uStack_14c & 0xffffff) == 0) {
    uVar6 = SUB84(local_158,0);
  }
  else {
    uVar6 = FUN_140e4b060(&local_158);
  }
  uVar5 = FUN_140e79500(uVar6);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_118 = uVar5;
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_14c = 0xf;
  local_158 = (longlong *)0x1000000000000ee;
  FUN_140e87930(&local_158,DAT_1419f5ef8,0x80000000,&local_118);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_d8 = 0x5c;
  uStack_14c = 0xd;
  local_158 = (longlong *)0x0;
  if (&local_158 != puVar3) {
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = uStack_150;
    uStack_4c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  local_d8 = 0x5d;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uStack_14c = 0xf;
  local_158 = (longlong *)0x1000000000000ee;
  uVar4 = uVar4 & 0xffffffffffffff00;
  uVar8 = (ulonglong)param_1 & 0xffffffffffffff00;
  FUN_140e87440(&local_158,DAT_1419f5868,0x80000000,&local_148,uVar8,uVar4);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140e87440(&local_148,DAT_141a55540,0x80000000,&local_a0,uVar8 & 0xffffffffffffff00,
                uVar4 & 0xffffffffffffff00);
  local_58 = _DAT_141ddb708;
  uStack_54 = uRam0000000141ddb70c;
  uStack_50 = uRam0000000141ddb710;
  uStack_4c = DAT_141ddb714;
  if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d0);
  }
  FUN_140041b80(local_d0,&local_58);
  local_b0 = local_d0;
  uVar5 = 0;
  switch(local_13c) {
  case 0:
  case 7:
  case 10:
  case 0xd:
switchD_140d7c3f5_caseD_0:
    uVar6 = FUN_140e4a8b0(&local_148);
    uVar5 = FUN_140e87250(uVar6);
    break;
  case 6:
    uVar5 = local_148;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_148 >> 0x20);
    if ((iVar2 == 0x1000000) || (iVar2 == 0x4000001)) goto switchD_140d7c3f5_caseD_0;
  }
  FUN_140e63610(uVar5,param_2,&local_138,1,&local_a0,&local_b0);
LAB_140d7c455:
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(local_d0,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

