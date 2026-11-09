// gml_Script____struct___422_anon_299_gml_Object_oCrimsonFriend_Create_0 @ 0x1408d6280

void gml_Script____struct___422_anon_299_gml_Object_oCrimsonFriend_Create_0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar6;
  undefined8 local_78;
  uint local_6c;
  double local_68;
  uint local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Object_oCredits_Draw_64";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 2;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a03438);
  local_5c = 0;
  local_68 = 0.0;
  iVar1 = FUN_140e851f0(uVar2,&local_68,DAT_141955260,0);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if (iVar1 == 0) {
    local_48 = 3;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a58180);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a58130);
    local_6c = 0;
    local_78 = 0x4060e00000000000;
    FUN_1400462a0(&local_78,uVar2);
    local_5c = 0xf;
    local_68 = 7.291128972913664e-304;
    if ((*(uint *)((longlong)puVar3 + 0xc) & 0xffffff) == 0) {
      uVar4 = (undefined4)*puVar3;
      uVar7 = (undefined4)((ulonglong)*puVar3 >> 0x20);
    }
    else {
      uVar2 = FUN_140e4b060(puVar3);
      uVar4 = (undefined4)uVar2;
      uVar7 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    if ((local_6c & 0xffffff) == 0) {
      uVar5 = (undefined4)local_78;
      uVar8 = (undefined4)((ulonglong)local_78 >> 0x20);
    }
    else {
      uVar2 = FUN_140e4b060(&local_78);
      uVar5 = (undefined4)uVar2;
      uVar8 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    if ((local_5c & 0xffffff) == 0) {
      dVar6 = local_68;
    }
    else {
      dVar6 = (double)FUN_140e4b060(&local_68);
    }
    FUN_140ec5dd0(param_1,(int)dVar6,0,0x43700000,(float)(double)CONCAT44(uVar8,uVar5),0x3dcccccd,
                  0x3dcccccd,0,0xffffff,(float)(double)CONCAT44(uVar7,uVar4));
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return;
}

