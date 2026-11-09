// gml_Script_scribble_super_create @ 0x14048ce30

undefined8 *
gml_Script_scribble_super_create
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  ulonglong in_stack_ffffffffffffff30;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  byte local_44;
  undefined8 *local_38 [2];
  
  local_70 = "gml_Script_scribble_super_clear";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 3;
  _eh_vector_constructor_iterator_(local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_8c = 0;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 5;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
LAB_14048cf10:
    local_88 = *(undefined4 *)param_5;
    uStack_84 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_80 = *(undefined4 *)(param_5 + 1);
    uStack_7c = *(undefined4 *)((longlong)param_5 + 0xc);
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_50);
    }
    FUN_140041b80(&local_50,&local_88);
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 != &local_50) goto LAB_14048cf10;
  }
  local_38[0] = &local_50;
  ppuVar5 = local_38;
  puVar3 = (undefined8 *)FUN_1401effd0(param_1,param_2,&local_98,1,ppuVar5);
  if (puVar3 != &local_c8) {
    local_88 = *(undefined4 *)puVar3;
    uStack_84 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_80 = *(undefined4 *)(puVar3 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_88);
  }
  FUN_140e87440(&local_c8,DAT_141a06208,0x80000000,&local_b8,(ulonglong)ppuVar5 & 0xffffffffffffff00
                ,in_stack_ffffffffffffff30 & 0xffffffffffffff00);
  switch(local_bc) {
  default:
switchD_14048cfce_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_c8;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_c8 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_14048cfce_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_c8);
    uVar4 = FUN_140e87250(uVar2);
  }
  FUN_140e63610(uVar4,param_2,&local_a8,0,&local_b8,0);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

